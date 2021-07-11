#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> n;
vector<int> m;
int target;
int binarySearch(int start, int end);

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		n.push_back(num);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		m.push_back(num);
	}

	for (int i = 0; i < M; i++)
	{
		target = m[i];
		if (binarySearch(0, N - 1) == -1)
			cout << "no ";
		else
			cout << "yes ";
	}
	return 0;
}

int binarySearch(int start, int end)
{
	if (start > end)
		return -1;
	int mid = (start + end) / 2;
	if (n[mid] == target)
		return mid;
	else if (n[mid] > target)
		return binarySearch(start, mid - 1);
	else if (n[mid] < target)
		return binarySearch(mid + 1, end);	
}