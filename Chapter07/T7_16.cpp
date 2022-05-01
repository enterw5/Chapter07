/*FileName:T7_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 19,2022
Function:shake two dice 3600 times and displays the frequency of the sum of two dice*/
#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int main()
{
    array<int,13>frequence={0};
    for(int i=1;i<=3600;i++)
    {
        int r1=1+rand()%6;//the first number of shaizi
        int r2=1+rand()%6;//the second number of shazi
        int result;
        result=r1+r2;//the sum of two shazi
        frequence[result]++;
    }
    for(int m=1;m<13;m++)
        cout<<"frequence("<<m<<")"<<frequence[m]<<endl;
    return 0;
}
