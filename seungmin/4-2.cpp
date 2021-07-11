#include <iostream>
#include <string>
using namespace std;
int count_3(int n);

int main(void)
{
	int n;
	int cnt;
	cin >> n;

	cout << (n+1) * 60 * 60 - (count_3(n) * (count_3(59) * count_3(59)));
}

int count_3(int n) //3이 없는 것들의 수
{
	int cnt = 0;
	for (int i = n; i >= 0; i--)
	{
		if (to_string(i).find("3") == string::npos)
			cnt++;
	}
	return cnt;
}