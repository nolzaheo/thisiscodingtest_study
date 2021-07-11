#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	char* tmp = new char[str.length()];
	
	int idx = 0;
	int num = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			tmp[idx++] = str[i];
		else
			num += (int)str[i] - 48;
	}

	tmp[idx] = '\0';
	sort(tmp, tmp+idx);

	cout << tmp << num << endl;
}