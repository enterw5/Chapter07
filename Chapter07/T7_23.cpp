/*
FileName:T7_23.cpp
Author:liumengdi
E-maile:1771314862@qq.com
Time:Apr. 30,2022
Function:A brute force method of knight tour
*/
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int size=8;
void init(int road[size][size])
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			road[i][j]=0;
		}
	}
}
void printarr(int road[size][size])
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout << road[i][j] << " ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool validMove(int row,int col,int road[size][size])
{
	return row>=0&&row<size&&col>=0&&col<=size&&road[row][col]==0;
}
int main()
{
	int road[size][size];
	init(road);
	cout<<"初始化后的骑士路径矩阵: "<<endl;
	printarr(road);
	bool done= false;
	bool goodMove;

	int horizontal[8]={-2,1,-1,-2,-2,-1,1,2};
	int vertical[8]={-1,-2,-1,-1,1,2,2,1};
	int movetype;
	int moveNumber=1;

	int currentRow,currentCol;
	int testRow,testCol;
	srand((int)time(NULL));
	currentRow=rand()%8;
	currentCol=rand()%8;

	while(!done)
	{
		movetype=0;
		testRow = currentRow + vertical[movetype];
		testCol = currentCol + horizontal[movetype];
		goodMove = validMove(testRow,testCol,road);

		if(goodMove)
		{
			currentCol=testCol;
			currentRow=testRow;
			road[currentRow][currentCol]= moveNumber++;
		}
		else
		{
			for(int count=0;count<size-1&&!goodMove;count++)
			{
				movetype = ++movetype%size;
				testRow = currentRow + vertical[movetype];
				testCol = currentCol + horizontal[movetype];
				goodMove = validMove(testRow,testCol,road);

				if(goodMove)
				{
					currentCol=testCol;
					currentRow=testRow;
					road[currentRow][currentCol]= moveNumber++;
				}
			}
			if(!goodMove)
				done=true;
		}
	}
	printarr(road);
	return 0;
}
