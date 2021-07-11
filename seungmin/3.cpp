#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 10000

int main(void)
{
	int N, M;
	cin >> N >> M;

	int* row = new int[M];

	int min = MAX;
	int tot_max = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> row[j];
		}
		min = *(min_element(row, row + M));
		if (min > tot_max)
			tot_max = min;
	}

	delete[] row;
	cout << tot_max;
}