/*FileName:T7_24.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:solve the eight queens problem*/
#include <iostream>

using namespace std;

int chess[8][8];
int queen[8];
int lastqueen=-1;
int solution=0;
int search_line(int i,int j);
void set_queen(int i,int j);
void uptake_queen(int i);
int main()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            chess[i][j]=0;
        }
    }
    for(int i=0;;i++)
    {
        int j=search_line(i,lastqueen+1);
        if(j==-1)
        {
            if(i==0) break;
            uptake_queen(i-1);
            lastqueen=queen[i-1];
            i-=2;
        }
        else
        {
            lastqueen=-1;
            set_queen(i,j);
            if(i==7)
            {
                solution++;
                uptake_queen(7);
                lastqueen=j;
                i--;
            }
        }
    }
    cout <<solution << endl;
    return 0;
}

int search_line(int i,int j)
{
    for (;j<8;j++)
    {
        if(chess[i][j]==0)
            return j;
        return -1;
    }
}
void set_queen(int i,int j)
{
    chess[i][j]=-1;
    queen[i]=j;
    for(int temp=0;temp<8;temp++)
    {
        if(chess[i][j]!=-1) chess[temp][j]++;
    }
        for(int temp=0;temp<8;temp++)
    {
        if(chess[i][j]!=-1) chess[i][temp]++;
    }
    int tempj=j+1;
    for(int tempi=i+1;tempi<8&&tempj<8;tempi++)
        chess[tempi][tempj++]++;
    tempj=j-1;
    for(int tempi=i+1;tempi<8&&tempj>=0;tempi++)
    {
        chess[tempi][tempj++]++;
    }
    tempj=j+1;
    for(int tempi=i-1;tempi>=0&&tempj<8;tempi--)
    {
        chess[tempi][tempj++]++;
    }
    tempj=j-1;
    for(int tempi=i-1;tempi>=0&&tempj<8;tempi--)
    {
        chess[tempi][tempj--]++;
    }
    return;
}
void uptake_queen(int i)
{
    int j=queen[i];
    for(int temp=0;temp<8;temp++)
    {
        if(chess[temp][j]!=-1) chess[temp][j]--;
    }
    for(int temp=0;temp<8;temp++)
    {
        if(chess[i][temp]!=-1) chess[i][temp]--;
    }
    int tempj=j+1;
    for(int tempi=i+1;tempi<8&&tempj<8;tempi++)
        chess[tempi][tempj++]--;
    tempj=j-1;
    for(int tempi=i+1;tempi<8&&tempj>=0;tempi++)
    {
        chess[tempi][tempj--]--;
    }
    tempj=j+1;
    for(int tempi=i-1;tempi>=0&&tempj<8;tempi--)
    {
        chess[tempi][tempj++]--;
    }
    tempj=j-1;
    for(int tempi=i-1;tempi>=0&&tempj>=0;tempi--)
    {
        chess[tempi][tempj--]--;
    }
    chess[i][j]=0;
    return;

}

