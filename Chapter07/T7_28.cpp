/*FileName:T7_28.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:make use of recursion to judgepalindrome string*/
#include <iostream>
#include <string>

using namespace std;

bool huiWenshu(string str,int h,size_t size)
{

    if(size <= 1)
        return true;
    if(str[h] != str[size - 1])
        return false;
    return huiWenshu(str,++h,size - 1);
}
int main()
{
    string str1;
    int size;
    int h=0;
    getline(cin,str1);
    size=str1.size();
    cout<<huiWenshu(str1,h,size);
    return 0;
}
