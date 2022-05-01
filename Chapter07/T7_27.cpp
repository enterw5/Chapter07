/*FileName:T7_27.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 28,2022
Function:make use of Eratosthenes to find prime*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    //a
    array<int,100>prime;
    for(int i=0;i<100;i++)
        prime[i]=1;

    for(int i=0;i<100;i++)//100个下标
    {
        int s=0;
        for(int m=2;m<i;m++)//判断是否为质数
        {
            if(i%m==0)
                s++;
        }
        if(s>0)
        {
            prime[i]=0;
        }
    }
    for(int i=0;i<100;i++)//打印array下标是否为质数的情况
        cout<<prime[i]<<" ";
    //b
    array<int,1000>primes;
    for(int i = 2; i < 1000; i++)//初始化
    {
        primes[i] = 1;
    }
    for( int i = 2; i < 1000; i++)
    {
        if(primes[i])
        {
            for( int m = 2; m <= (1000/i); m++)//令其倍数下标所相应的元素为0
                {

                        primes[m*i]=0;

                }
        }
    }
    int t1=0;
    for( int t = 2; t < 1000; t++)//打印出元素为0的下标
    {

        if( primes[t] == 1)
            {
                cout<<t<<" ";
                t1++;
                if(t1==10)
                {
                    cout<<endl;
                    t1=0;
                }
            }

    }
    return 0;
}
