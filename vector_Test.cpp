#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>  // 算法头文件

/*
vector 容器，容器就是可变数组。使用时在扩充其大小
vecotor入门参考：
https://blog.csdn.net/weixin_41743247/article/details/90635931
*/

using namespace std;
int main(){
    string str;
    vector<string> vectorone;

    for (int i =0;i<10;i++){
        // to_string整型转换为字符串  //atoi 字符串转为整型
        string ai = to_string(i);  
        str = "1" + ai;
        // 尾插法
        vectorone.push_back(str);
    }

    // size() 获取容器大小
    cout << vectorone.size() << endl;

    // insert() 在指定迭代器位置之前插入，迭代器end() 并不是容器最后一个元素，而是最后一个元素的下一个
    // 参数说明，开始插入的位置，插入的个数(可省)，插入的元素
    vectorone.insert(vectorone.end(),"para0");
    vectorone.insert(vectorone.end(),2,"para1");

    // pop_back() 删除尾部最后一个元素
    vectorone.pop_back();
    
    // 返回容器的第一个值，可以使用下标 0 或者front
    cout << "first element " << vectorone.front() << endl << vectorone[0] <<endl;
    // 返回容器的最后一个值，可以使用下标vectorone.size() 或者back

    cout << "last1 element " << vectorone.back() << endl << vectorone[vectorone.size()]<< endl;
    system("pause");

    // 移除迭代器指向位置的值或指定区间内地值，容器大小减一
    vectorone.erase(vectorone.end()-2, vectorone.end());
    cout << "last2 element " << vectorone.back() << endl;


    for(auto vet = vectorone.begin();vet != vectorone.end();vet++){
        cout << *vet << " "; // 迭代器返回是一个指针,使用时需要取指针指向的值
    }
    cout << endl; 
    system("pause");

    // 翻转容器，容器元素逆序排列
    reverse(vectorone.begin(),vectorone.end());
    for(auto vet = vectorone.begin();vet != vectorone.end();vet++){
        // 迭代器返回是一个指针,使用时需要取指针指向的值
        cout << *vet << " ";
    }
    cout << endl; 
    system("pause");

    // 容器元素排序
    sort(vectorone.begin(),vectorone.end());
    for(auto vet = vectorone.begin();vet != vectorone.end();vet++){
        // 迭代器返回是一个指针,使用时需要取指针指向的值
        cout << *vet << " ";
    }
    system("pause");

    
}

