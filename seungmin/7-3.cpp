#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int binary_search(int start, int end);
int check(int h);

int N, M;
vector<int> v;
int main(void)
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());

	cout<<binary_search(0,v[N-1]-1);

}

int binary_search(int low, int high)
{
	if (low > high)
		return low;
	int mid = (low + high) / 2;
	int tot = check(mid);
	if (tot == M)//���� ã�� ���
		return mid;
	else if (tot > M) //��
		return binary_search(mid + 1, high);
	else //��
		return binary_search(low, mid - 1);
}

int check(int h)
{
	int tot = 0;
	for (int i = 0; i < N; i++)
	{
		if(v[i]>h)
			tot += v[i] - h;
	}

	return tot;
}