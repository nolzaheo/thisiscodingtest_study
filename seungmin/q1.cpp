#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	int cnt = 0;
	cin >> n;
	int* list = new int[n];

	for (int i = 0; i < n; i++)
		cin >> list[i];

	sort(list, list + n);

	for (int i = n - 1; i >= 0;)
	{
		i -= list[i];
		if (i+1 >= 0)
			cnt++;
		else
			break;
	}
	cout << cnt;
}

//정렬 후 큰 수의 개수만큼 없애가는 식으로(묶음) 그룹을 셈