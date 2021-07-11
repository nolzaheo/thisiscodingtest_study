#include <iostream>
using namespace std;

int main(void)
{
	int N, M,cnt=0;
	cin >> N >> M;

	int* list = new int[N];

	for (int i = 0; i < N; i++)
		cin >> list[i];

	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (list[i] == list[j])
				continue;
			cnt++;
		}
	}

	cout << cnt;
}