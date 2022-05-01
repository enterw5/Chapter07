/*FileName:T7_10.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 15,2022
Function:calculate the salary range of salesperson*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,10>t;
    array<int,11>frequence={0};
    int a=200;//a stands the limit money
    int b;int c;
    for(int i=1;i<=10;i++)
    {cin>>b;
    c=a+b*0.09;
    if(c>1000)
        c=1000;
    frequence[c/100]++;
    }
    for(int m=2;m<=10;m++)
    cout<<m*100<<"~"<<m*100+99<<"ÃÀÔª: "<<frequence[m]<<endl;
    return 0;
}
