/*FileName:T7_8.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 15,2022
Function:
         a:display alphabet[6]
         b:assign a number to grades[4]
         c:initializes a set of integers to 8
         d:caculate the sum of temperatures[100] and print the sum
         e:copy a[11] copy to b[34]
         f:judge and print the min and max of w[99] */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    //a
    array <int, 10>alphabet={0};
    cout<<alphabet[6]<<endl;
    //b
    array<double,10>grades={0.0};
    grades[4]=2.1;
    cout<<grades[4]<<endl;
    //c
    array<int,5>values={8,8,8,8,8};
    for(int value:values)
        cout<<value<<" ";
    cout<<endl;
    //d
    array<double ,100>temperatures={1,2,3,4,100,150};
    double total=0.0;
    for(double temperature:temperatures)
        total+=temperature;
        cout<<total<<endl;
    //e
    array<double,11>a={1,2,3,4,5,6,7,8,9,10,11};
    array<double,34>b={5,6,4,3,2,1,7,8,9,4,5,6,1,2,3,4,89,42};
    for(double i=0;i<a.size();i++)
        b[i]=a[i];
    for(double bs:b)
        cout<<bs<<" ";
    cout<<endl;
    //f
    array<double,99>w={0,1,2,3,4,5,6,7,8,9,99};
    double lownumber=99;
    double highnumber=0;
    for(double i=0;i<w.size();i++)
       {if(w[i]<lownumber)
        lownumber=w[i];
        if(w[i]>highnumber)
            highnumber=w[i];
        }
     cout<<lownumber<<" "<<highnumber<<endl;
    return 0;
}
