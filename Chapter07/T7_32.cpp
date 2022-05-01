/*FileName:T7_32.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 28,2022
Function:make use of recursion to find the minimum of the array*/
#include <iostream>

using namespace std;

int recursiveMinimum(int *a,int i,int j)
{
    int min1;
    min1=a[0];
    if(i==j)
        cout<<min1;
    else
    {
        recursiveMinimum(a,++i,j);
        if(min1>a[i])
            min1=a[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int *a = new int [n];
    for(int m=0;m<n;m++)
        cin>>a[m];
    int i = 0;int j = n;
    recursiveMinimum(a,i,j);
    return 0;
}
