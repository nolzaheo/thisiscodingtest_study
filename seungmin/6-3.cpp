#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	string* name = new string[n];
	int **grade = new int* [n];
	for (int i = 0; i < n; i++)
		grade[i] = new int[2];

	for (int i = 0; i < n; i++)
	{
		cin >> name[i];
		grade[i][0] = i;
		cin >> grade[i][1];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (grade[i][1] > grade[j][1])
			{
				int tmp[2];
				tmp[0] = grade[i][0];
				tmp[1] = grade[i][1];

				grade[i][0] = grade[j][0];
				grade[i][1] = grade[j][1];

				grade[j][0] = tmp[0];
				grade[j][1] = tmp[1];
			}
		}
	}
	
	for (int i = 0; i < n; i++)
		cout << name[grade[i][0]] << endl;
}