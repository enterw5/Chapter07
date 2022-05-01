/*FileName:T7_19.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:eliminate the only properties of the vector object and turn vector object to array object for tu7.26*/
#include <iostream>
#include <array>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    array<array<int ,7>,7>tu;
    cout<<"    1 2 3 4 5 6"<<endl;
    for(int i=1;i<7;i++)
    {
        cout<<setw(3)<<i<<" ";
        for(int i1=1;i1<7;i1++)
            cout<<i1+i<<" ";
        cout<<endl;
    }
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
