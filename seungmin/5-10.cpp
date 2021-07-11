#include <iostream>
#include <stack>
#include <string>

using namespace std;

int visited(int x, int y);
int index_check(int x, int y);
int M, N;
int** list;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main(void)
{	
	int cnt = 0;
	cin >> M >> N;

	list = new int* [M];
	for (int i = 0; i < M; i++)
		list[i] = new int[N];

	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < N; j++)
			list[i][j] = (int)s[j] - 48;
	}
	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (list[i][j] == 0)
			{
				list[i][j] = 1;
				visited(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}

int visited(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		if (index_check(x + dx[i], y + dy[i]))
		{
			if (list[x + dx[i]][y + dy[i]] == 0)//not visited yet
			{
				list[x + dx[i]][y + dy[i]] = 1;//visited-true·Î ¹Ù²ãÁÜ
				visited(x + dx[i], y + dy[i]);
			}
		}
	}
	return 0;
}

int index_check(int x, int y)
{
	if (x >= 0 && y >= 0 && x < M && y < N)
		return 1;
	else
		return 0;
}