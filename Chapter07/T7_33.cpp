/*FileName:T7_33.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:maze traversal*/
const int DIR_SIZE = 4;

struct Node
	{
		int nx;
		int ny;
		int nval;
		bool nstats[DIR_SIZE];
	};
#include <iostream>
#include <stack>
using namespace std;


const int RIGHT = 0;
const int DOWN = 1;
const int LEFT = 2;
const int UP = 3;



const bool YES = true;
const bool NO = false;


class Maze
{
private:

	struct Node
	{
		int nx;
		int ny;
		int nval;
		bool nstats[DIR_SIZE];
	};

	Node** marr;
	int mrow;
	int mcol;
	stack<Node> mstack;
public:
	Maze(int row, int col)
		: mrow(row)
		, mcol(col)
	{

		marr = new Node*[row];
		for (int i = 0; i < row; ++i)
		{
			marr[i] = new Node[col];
		}
	}
	~Maze()
	{
		for (int i = 0; i < mrow; ++i)
		{
			delete[]marr[i];
		}
		delete[]marr;

		marr = nullptr;
	}

	void init_maze(int x, int y, int val)
	{
		marr[x][y].nx = x;
		marr[x][y].ny = y;
		marr[x][y].nval = val;
		for (int i = 0; i < DIR_SIZE; ++i)
		{
			marr[x][y].nstats[i] = NO;
		}
	}


	void set_dir_stats()
	{
		for (int i = 0; i < mrow; ++i)
		{
			for (int j = 0; j < mcol; ++j)
			{
				if (j < mcol - 1 && marr[i][j + 1].nval == 0)
				{
					marr[i][j].nstats[RIGHT] = YES;
				}

				if (i < mrow - 1 && marr[i + 1][j].nval == 0)
				{
					marr[i][j].nstats[DOWN] = YES;
				}

				if (j > 0 && marr[i][j - 1].nval == 0)
				{
					marr[i][j].nstats[LEFT] = YES;
				}

				if (i > 0 && marr[i - 1][j].nval == 0)
				{
					marr[i][j].nstats[UP] = YES;
				}
			}
		}
	}

	void traverse_maze_find_path()
	{
		if (marr[0][0].nval == 1)
		{
			return;
		}

		mstack.push(marr[0][0]);

		while (!mstack.empty())
		{

			int x = mstack.top().nx;
			int y = mstack.top().ny;

			if (x == mrow - 1 && y == mcol - 1)
			{
				return;
			}

			if (marr[x][y].nstats[RIGHT] == YES)
			{

				marr[x][y].nstats[RIGHT] = NO;
				marr[x][y + 1].nstats[LEFT] = NO;
				mstack.push(marr[x][y + 1]);
				continue;
			}
			if (marr[x][y].nstats[DOWN] == YES)
			{
				marr[x][y].nstats[DOWN] = NO;
				marr[x + 1][y].nstats[UP] = NO;
				mstack.push(marr[x + 1][y]);
				continue;
			}
			if (marr[x][y].nstats[LEFT] == YES)
			{
				marr[x][y].nstats[LEFT] = NO;
				marr[x][y - 1].nstats[RIGHT] = NO;
				mstack.push(marr[x][y - 1]);
				continue;
			}
			if (marr[x][y].nstats[UP] == YES)
			{
				marr[x][y].nstats[UP] = NO;
				marr[x - 1][y].nstats[DOWN] = NO;
				mstack.push(marr[x - 1][y]);
				continue;
			}


			mstack.pop();
		}
	}

	void show_maze_path()
	{
		if (mstack.empty())
		{
			cout << "不存在一条迷宫路径！" << endl;
			return;
		}

		while (!mstack.empty())
		{
			Node cur = mstack.top();
			marr[cur.nx][cur.ny].nval = '*';
			mstack.pop();
		}

		for (int i = 0; i < mrow; ++i)
		{
			for (int j = 0; j < mcol; ++j)
			{
				if (marr[i][j].nval == '*')
				{
					cout << "*" << " ";
				}
				else
				{
					cout << marr[i][j].nval << " ";
				}
			}
			cout << endl;
		}
	}

};


int main()
{
	int row;
	int col;
	cout << "请输入迷宫的行列数(例如：10 10): " << endl;
	cin >> row >> col;

	Maze maze(row, col);

	int data = 0;
	cout << "请输入迷宫的路径信息(0表示可以走，1表示不能走): " << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin >> data;
			maze.init_maze(i, j, data);
		}
	}

	maze.set_dir_stats();
	maze.traverse_maze_find_path();
	maze.show_maze_path();

	return 0;
}

