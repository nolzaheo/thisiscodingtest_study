#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	int x=0, y=0;
	cin >> n;
	string move;
	cin.ignore();
	getline(cin, move);

	for (int i = 1; i < move.size(); i++)
	{

		//xÃà¹æÇâ
		if (move[i] == 'R')
		{
			if (x == n)
				continue;
			x++;
		}
		else if (move[i] == 'L')
		{
			x--;
		}
		else if (move[i] == 'U')
		{
			y++;
		}
		else if (move[i] == 'D')
		{
			y--;
		}
	}
}