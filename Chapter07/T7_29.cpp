/*
FileName:T7_29.cpp
Author:liumengdi
E-maile:1771314862@qq.com
Time:Apr. 28,2022
Function:slove the eight queens problem with recursion*/
#include<iostream>

using namespace std;

int queen[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
int count=0;

bool available(int pointi,int pointj);

void findSpace(int queenNumber);

int main(){
	findSpace(1);//从（1，1）开始递归好理解
	cout<<count<<endl;
	return 0;
}

bool available(int pointi,int pointj)
{
    for(int i=1; i<pointi; i++)
    {
        if(pointj==queen[i])return false;
        if((pointi-i)==(pointj-queen[i]))return false;
        if((pointi-i)+(pointj-queen[i])==0)return false;
    }
    return true;
}
void findSpace(int queenNumber) //在第queenNumber行找能放皇后的位置
{
    for(int i=1; i<9; i++) //从1~8遍历这一行的八个空位
    {
        if(available(queenNumber,i))
        {
            queen[queenNumber]=i;
            if(queenNumber==8)
            {
                count++;
                return;
            }
            int nextNumber=queenNumber+1;
            findSpace(nextNumber);
        }
    }
    queen[--queenNumber]=-1;
}

