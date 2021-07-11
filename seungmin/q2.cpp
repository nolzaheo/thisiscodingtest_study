#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	int len;
	int* to_int;
	int result = 1;
	string s;
	cin >> s;
	
	len = s.length();
	to_int = new int[len];

	for (int i = 0; i < len; i++)
		to_int[i] = (int)s[i] - 48;

	sort(to_int, to_int+len);

	for (int i = 0; i < len; i++)
	{
		if (to_int[i] == 0)
			continue;
		result *= to_int[i];
	}
	cout << result;
}

//결국 0을 제외한 수들의 곱임