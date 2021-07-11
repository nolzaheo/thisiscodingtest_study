#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int cnt, plus, max;
	cin >> cnt >> plus >> max;

	int* list = new int[cnt];

	for (int i = 0; i < cnt; i++)
		cin >> list[i];

	sort(list, list + cnt);

	cout<< (plus / (max + 1)) * (list[cnt-1]*max+list[cnt-2]) + (plus % (max + 1) * list[cnt-1]);

}
