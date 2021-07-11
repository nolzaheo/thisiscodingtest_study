#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define MAX 200

int index_check(int x, int y, int(*visited)[MAX]);
void dfs(int cnt, int x, int y, int(*visited)[MAX]);

int** list;
int res=400;
int N, M;
int dx[4] = { 0,1,-1,0 };
int dy[4] = { 1,0,0,-1 };

int main(void)
{
	cin >> N >> M;

	list = new int* [N];
	for (int i = 0; i < N; i++)
		list[i] = new int[M];

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < M; j++)
			list[i][j] = (int)str[j] - 48;
	}

	int visited[MAX][MAX] = { 0, };
	visited[0][0] = 1;
	dfs(0, 0, 0, visited);
	
	cout << res+1;//출발점 포함
	
	for (int i = 0; i < N; i++)
		delete[] list[i];
	delete[] list;

	return 0;
}

void dfs(int cnt, int x, int y,int(*visited)[MAX])
{
	//종점인지 확인
	if (x == N - 1 && y == M - 1)
	{
		if (cnt < res)
			res = cnt;
		return;
	}

	//사방검사
	for (int i = 0; i < 4; i++)
	{
		if (index_check(x + dx[i], y + dy[i],visited))
		{
			//s.push(make_pair(x + dx[i], y + dy[i]));
			visited[x + dx[i]][y + dy[i]] = 1;
			cnt++;
			dfs(cnt, x + dx[i], y + dy[i], visited);
		}
	}
}

int index_check(int x, int y, int(*visited)[MAX])
{
	if (x >= 0 && y >= 0 && x < N && y < M &&list[x][y]==1&&visited[x][y]==0)
		return 1;
	else
		return 0;
}