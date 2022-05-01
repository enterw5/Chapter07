/*FileName:T7_13.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 16,2022
Function:using array object to remove duplicate*/
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int,101>t={0};//record 20 numbers'frequence
    array<int,20>s;//input 20 numbers
    int counter=0;
    for(int i=0;i<20;i++)
    {
        int m;
        cin>>m;
        if(m>=10&&m<=100)
            ;
        else cin>>m;
        t[m]++;
        if(t[m]==1)//if s[i] appear before,give 0 to s[i] to avoid same
        s[i]=m;
        else s[i]=0;
    }
    for(int i=0;i<20;i++)
    {

        if(s[i]==0)
            counter++;//solve the 0 of new array ,because 0 isn't in the 20 numbers
    }
    cout<<counter<<endl;
    int x=20-counter;
    int *n=new int [x];//conduct a new array to place the numbers of not the same
    for(int i=0;i<20;i++)
    {
        int g=0;
        if(s[i]!=0)
        n[i]=s[i];
        else {while(s[i]==0&&i<20)//delete 0
            {i=i+1;
            g++;}
            cout<<g<<endl;
        n[i-g]=s[i];}
    }
    for(int i=0;i<x;i++)
        cout<<n[i]<<" ";
    return 0;
}
