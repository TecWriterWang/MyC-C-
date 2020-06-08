/*
vector 评委打分
*/

#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <random>
#include <algorithm>

using namespace std;
class Person
{
private:

public:
    string m_name;
    double m_socer;
    Person(string name,double socer);
    ~Person();
};

Person::Person(string name, double socer=0.0)
{
    this->m_name = name;
    this->m_socer = socer;
    // cout << "Ceart One Person" << endl;
}

Person::~Person()
{
    // cout << "Delete One Person" << endl;

}
void setSocer(vector<Person>&per){
    // 操作每个运动员
    for(auto periter=per.begin();periter!=per.end();periter++){
        // 存入评委的打分成绩
        deque<double>socdeq;
        for(int i =0;i < 10 ;i++){
            double socer = rand()% 41 + 60;
            socdeq.push_back(socer);
        }
        cout << periter->m_name  << " socers is: "<< endl; 

        for(auto deqiter = socdeq.begin();deqiter!=socdeq.end();deqiter++){
            cout << *deqiter << " ";
        }
        cout << endl; 

        
        sort(socdeq.begin(),socdeq.end());
        socdeq.pop_front();
        socdeq.pop_back();
        double sum = 0.0;
        // 求average
        for(auto iter = socdeq.begin();iter!=socdeq.end();iter++){
            sum += (*iter);
        }
        periter->m_socer = sum/socdeq.size();
        cout << endl;
    }

}

int main(){
    vector<double> socer;
    vector<Person> person;
    string nameSeed = "ABCDE";
    
    for(int i =0;i<5;++i){
        string name = "Sporter ";
        name += nameSeed[i];
        Person tempperson(name);
        person.push_back(tempperson);
    }


    setSocer(person);
    for(auto iter=person.begin();iter!=person.end();iter++){
        cout << iter->m_name << "'s Average Socer is：" << (*iter).m_socer << endl;

    }
    system("pause");
}

