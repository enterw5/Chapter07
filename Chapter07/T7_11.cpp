/*FileName:T7_11.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 16,2022
Function:
         a:initialze counts as 0
         b:add 1 to every element of bonus
         c:input a number to every element of monthlyTemperatures
         d:print every element of bestScores in the form of column*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    //a
    array<int,10>counts={0};
    //b
    array<int,15>bonus={0};
    for(int bonu:bonus)
        bonu+=1;
    //c
    array<double,12>monthlyTemperatures;
    for(double month:monthlyTemperatures)
        cin>>month;
    //d
    array<int ,5>bestScores={1,2,3,4,5};
    for(int best:bestScores)
        cout<<best<<endl;
    return 0;
}
