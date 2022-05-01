/*FileName:T7_31.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:make use of recursion to print strings in reverse order*/
#include <iostream>
#include <string>

using namespace std;

void stringReverse(string str,int i)
{
    if(i==-1)
        ;
    else
    {
        cout<<str[i]<<" ";
        stringReverse(str,--i);
    }
}
int main()
{
    string str1;
    cin>>str1;
    int i=str1.size()-1;
    stringReverse(str1,i);
    return 0;
}
