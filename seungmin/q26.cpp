#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	vector<int> v;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int tot = v[0]+v[1];
	for (int i = 2; i < N; i++)
		tot += tot + v[i];
	
	cout << tot;
}