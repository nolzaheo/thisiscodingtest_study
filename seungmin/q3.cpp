#include <iostream>
using namespace std;

int main(void)
{
	int cnt[2]{ 0, };
	string s;
	cin >> s;

	char cur = s[0];
	cnt[(int)cur - 48]++;
	for (int i = 1; i < s.length();i++)
	{
		if (s[i] != cur)
		{
			cur = s[i];
			cnt[(int)cur - 48]++;
		}
	}

	cout << ((cnt[0] >= cnt[1]) ? cnt[1] : cnt[0]);

}

//숫자별로 묶음 수 세서 더 적은 묶음 수 출력