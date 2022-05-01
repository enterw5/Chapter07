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
	findSpace(1);//�ӣ�1��1����ʼ�ݹ�����
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
void findSpace(int queenNumber) //�ڵ�queenNumber�����ܷŻʺ��λ��
{
    for(int i=1; i<9; i++) //��1~8������һ�еİ˸���λ
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

