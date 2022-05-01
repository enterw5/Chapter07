/*FileName:T7_34.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:randomly generated maze*/
#include <iostream>
#include<stack>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

struct box{
    int x, y;
    int di;
};
int main(){
    int m, n;
    cout << "请输入迷宫的行数和列数" << endl;
    cin >> m >> n;
    char maze[m+4][n+4];
    for(int i=0;i<m+4;i++){
    	for(int j=0;j<n+4;j++){
    		maze[i][j]='#';
		}
	}
    for(int i=0;i<m+4;i++){
        maze[i][0]=maze[i][n+3]='*';
    }
    for(int i=0;i<n+4;i++){
        maze[0][i]=maze[m+3][i]='*';
    }
    int dRow[] = {1, 0, -1, 0};
    int dCol[] = {0, -1, 0, 1};
    vector<int> X,Y;
    X.push_back(2);
    Y.push_back(2);
    while (X.size()) {
		srand((unsigned int)(time(NULL)));
		int index=rand()%(X.size());
		int x=X[index];
		int y=Y[index];
		int cnt = 0;
		int r,c;
		for(int i=0;i<4;i++){
			r=x+dRow[i];c=y+dCol[i];
			if(maze[r][c]=='*')
				cnt++;
		}
		if(cnt<=1){
			maze[x][y]='*';
			for(int i=0;i<4;i++){
				r=x+dRow[i];c=y+dCol[i];
				if(maze[r][c]=='#'){
					X.push_back(r);
					Y.push_back(c);
				}
			}

		}

		X.erase(X.begin()+index);
		Y.erase(Y.begin()+index);
	}
	for (int i = n- 3; i >= 0; i--) {
		if (maze[i][n - 3] == '*') {
			maze[i][n - 2] = '*';
			break;
		}
	}
	maze[m+1][n+1]='*';
	int MAZE[m + 2][n+2];
	cout<<"随机生成的合理迷宫为："<<endl;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			MAZE[i][j]=maze[i+1][j+1];
			cout<<MAZE[i][j]<<" ";
		}
		cout<<endl;
	}
}



