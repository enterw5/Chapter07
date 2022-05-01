/*
FileName:T7_26.cpp
Author:liumengdi
E-maile:1771314862@qq.com
Time:Apr.30,2022
*/
#include <iostream>

using namespace std;

int chess[8][8]={0};
int counter=0;
bool isOut(int x,int y);
bool isVisited(int x,int y);
void dfs(int x,int y);

int main()
{
    int x,y;
    cin >> x >> y;
     dfs(x,y);
     for(int i=0;i<8;i++)
     {
         for(int j=0;j<8;j++)
         {
             cout << chess[i][j] << " ";
         }
         cout << endl;
     }
     if(chess[x-2][y-1]==64 || chess[x-2][y+1]==64 || chess[x+1][y+2]==64 || chess[x+1][y-2]==64) cout << "yes" << endl;
     else cout << "no" << endl;
    return 0;
}

bool isOut(int x,int y)
{
    if(x>=0 && x<=7 && y>=0 && y<=7)
    {
        return false;
    }
    else return true;
}
bool isVisited(int x,int y)
{
    if(chess[x][y]!=0)
    {
        return true;
    }
    else return false;
}
void dfs(int x,int y)
{
    if(counter==64) return;
    if(!(isOut(x,y))&&!(isVisited(x,y)))
    {
        counter++;
        chess[x][y]=counter;
        dfs(x+2,y+1);
        dfs(x+1,y+2);
        dfs(x-1,y+2);
        dfs(x-2,y+1);
        dfs(x-2,y-1);
        dfs(x-1,y-2);
        dfs(x+1,y-2);
        dfs(x+2,y-1);
        return;

    }
    else
        {
        return;
        }

    }
