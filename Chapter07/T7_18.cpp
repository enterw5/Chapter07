/*FileName:T7_18.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 22,2022
Function:modify the statistical results of double screen throwing game program*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

unsigned int rollDice();
int main()
{
    array<array<int,2>,22>frequence={0};
    int m;
    srand(static_cast<unsigned int >(time(0)));
    cout<<"     Lost  win"<<endl;
    for(int i = 1; i <= 1000; i++)
    {
        enum Status{CONTINUE,WON,LOST};


    unsigned int myPoint=0;
    Status gameStatus = CONTINUE;
    unsigned int sumOfDice = rollDice();

    switch(sumOfDice)
    {
    case 7:
    case 11:gameStatus = WON;break;
    case 2:
    case 3:
    case 12:gameStatus =LOST;break;
    default:gameStatus = CONTINUE;
    myPoint = sumOfDice;
    //cout<<"Point is "<<myPoint<< endl;
    break;
    }

    while(CONTINUE == gameStatus)
    {
        sumOfDice = rollDice();

        if(sumOfDice == myPoint)
            gameStatus = WON;
        else
            if( sumOfDice == 7)
            gameStatus = LOST;
    }
    int i1;
    if(i>20)
         i1=21;
    else  i1=i;
    if( WON == gameStatus)//1 stands win and 0 stands lost
        m=1;
    else m=0;
    frequence[i1][m]++;//give result to frequence[i1][m] to display win or lost
    }
    for(int n = 1;n < 22;n++)
        {
        cout<<"第"<<n<<"次 ";//第21次代表第20次以后
        for(int s = 0;s < 2; s++)
        cout<<frequence[n][s]<<"     ";
    cout<<endl;}
    return 0;
}
unsigned int rollDice()
{
    unsigned int die1= 1 + rand()%6;
    unsigned int die2= 1 + rand()%6;

    unsigned int sum = die1 + die2;

    //cout<< "Player rolled " << die1 << "+" << die2 <<"=" << sum << endl;
    return sum;
}
