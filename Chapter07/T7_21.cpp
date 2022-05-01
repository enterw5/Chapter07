/*FileName:T7_21.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:make use of array to calculate the sum of every kind of product and calculate the sum of every staff */
#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    array<array<int,5>,6>sales={0};
    int sum = 0;
    int s,s1,s2;
    cin>>s>>s1>>s2;
    while(s!=0)
    {
    switch(s)
    {
        case 1:sales[s1][1]+=s2;break;
        case 2:sales[s1][2]+=s2;break;
        case 3:sales[s1][3]+=s2;break;
        case 4:sales[s1][4]+=s2;break;
        default:break;
    }
    cin>>s>>s1>>s2;}
    /*for(int i = 1;i < 6;i++)//five row stands five kinds
        for(int m = 1; m < 5;m++)//four column stands four staff
        cin>>sales[i][m];*/

    cout<<setw(6)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<setw(5)<<"4"<<endl;
    for(int i = 1;i < 6;i++)
    {
        sum=0;
        cout<<i;
        for(int m = 1; m < 5; m++)
        {
            cout<<setw(5)<<sales[i][m];
            sum+=sales[i][m];//calculate the sum of every row
        }
        cout<<setw(5)<<sum<<endl;
    }
    cout<<" ";
    for(int m = 1; m < 5;m++)
    {
        int sum1=0;
        for(int i = 1;i < 6;i++)
        sum1+=sales[i][m];//calculate the sum of every column
        cout<<setw(5)<<sum1;}
    return 0;
}
