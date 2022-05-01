/*FileName:T7_14.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 16,2022
Function:using vector object to remove duplicate*/
#include <iostream>
#include <vector>
#include<stdexcept>

using namespace std;

int main()
{
    vector<int>t(101);
    vector<int>t1(0);
    int number;
    for(int i=0;i<20;i++)
    {
        cin>>number;
        if(number>=10&&number<=100)
            ;
        else cin>>number;
        t[number]++;
        if(t[number]==1)
           t1.push_back(number);//add number to the end of t1
    }
    for(int i=0;i<t1.size();i++)
        cout<<t1[i]<<" ";
    return 0;
}
