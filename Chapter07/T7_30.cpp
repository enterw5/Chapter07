/*FileName:T7_30.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:make use of recursion to print array*/
#include <iostream>
#include <array>

using namespace std;

void printArray(int *a,int i,int j)
{
    if(i==j)
        ;
    else
    {
        cout<<a[i]<<" ";
        printArray(a,i+1,j);
    }
}
int main()
{
    int len;
    cin>>len;

    int *a=new int [len];
    for(int m=0;m<len;m++)
        cin>>a[m];
    int i=0;int j=len;
    printArray(a,i,j);
    return 0;
}
