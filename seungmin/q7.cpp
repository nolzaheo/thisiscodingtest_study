#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	string num;
	int left=0, right=0;
	cin >> num;
	
	int len = num.length();

	for (int i = 0; i < len / 2; i++)
		left += num[i];
	

	for (int i = (len + 1) / 2; i < len; i++)
		right += num[i];

	if (left == right)
		cout << "LUCKY" << endl;
	else
		cout << "READY" << endl;
}