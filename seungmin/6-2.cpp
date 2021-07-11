#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int i, int j);

int main(void)
{
	int n;
	cin >> n;

	int* list = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list[i];

	sort(list, list + n, compare);
	
	for (int i = 0; i < n; i++)
		cout << list[i]<<" ";
}

bool compare(int i, int j)
{
	return j < i;
}