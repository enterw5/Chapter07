/*FileName:T7_9.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 15,2022
Function:
         a:state t of 2 row and 3 column
         g:initializes t[1][2] as 0
         h:don't use loop initializes t to 0
         i:use for loop controlled by nested counters to initialize t to 0
         j:use nested scope based for loops to initialize t to 0
         k:input t
         l:judege and print the minimum of t
         m:display the elements of t of 1 row
         n:calculate the sum of t of 2 column
         o:print t in the form of blank and place the row s as the header above and the column on the left side of the row  */
#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    //a
    const size_t m=3;
    const size_t i=2;
    array<array<int,m>,i>t;
    //g
    t[1][2]=0;
    //h
    t[0][0]=0;
    t[0][1]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;
    //i
    for(size_t i1=0;i1<t.size();i1++)//i1 stands row
        for(size_t m1=0;m1<t[i].size();m1++)//m1 stands column
        t[i1][m1]=0;
    //j
    for(auto i:t)
        for(auto s:i)
        s=0;
    //k
    for(size_t i1=0;i1<t.size();i1++)//i1 stands row
        for(size_t m1=0;m1<t[i1].size();m1++)//m1 stands column
        {cin>>t[i1][m1];
        cout<<t[i1][m1]<<" ";}
        cout<<endl;
    //l
    int lownumber=t[0][0];
    for(auto i:t)
        for(auto s:i)
    {
        if(s<lownumber)
            lownumber=s;
    }
    cout<<lownumber<<endl;
    //m

    for(int a=0;a<t[1].size();a++)//a stands column
        cout<<t[1][a]<<" ";
        cout<<endl;
    //n
    int sum=0;
    for(int b=0;b<t.size();b++)//b stands row
        sum+=t[b][2];
        cout<<sum<<endl;
    //o
    cout<<"   "<<"[0] [1] [2]"<<endl;
    for(int c=0;c<i;c++){//c stands row
        cout<<"["<<c<<"]";
        for(int d=0;d<m;d++)//d stands column
            cout<<setw(3)<<t[c][d]<<" ";
        cout<<endl;
    }

    return 0;
}
