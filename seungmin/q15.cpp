#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int N, M, K, X;
	int goal = 1;

	cin >> N >> M >> K >> X;

	int** list;
	list = new int* [N+1];
	for (int i = 0; i <= N; i++)
		list[i] = new int[N+1];

	int* count = new int[N + 1];
	for (int i = 0; i <= N; i++)
		memset(list[i], 0, sizeof(int) * (N + 1));

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		list[x][y] = 1;
	}

	int cnt = 0;
	int* visited = new int[N + 1];
	memset(visited, 0, sizeof(int) * (N + 1));
	queue<int> q;
	q.push(X);

	int v;
	while (!q.empty())
	{
		v = q.front();
		count[v] = cnt;
		q.pop();
		for (int i = 1; i <= N; i++)
		{
			if (visited[i] != 1 && list[v][i] == 1)//인접한것 검사
			{
				q.push(list[v][i]);
				visited[i] = 1;
				cnt++;
			}
		}

	}

	//동적할당 해제
	for (int i = 0; i <= N; i++)
		delete[] list[i];
	delete[] list;

	delete[] visited;

	for (int i = 1; i <= N; i++)
		cout << count[i];
}