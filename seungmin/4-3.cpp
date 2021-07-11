#include <iostream>
#include <cstring>
using namespace std;
int check(int x);

int main(void)
{
	string pos;
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { -1,1,0,0 };
	int pos_x, pos_y;
	int result = 0;
	
	cin >> pos;
	pos_x = (int)pos[0] - 96;
	pos_y = (int)pos[1] - 48;

	for (int i = 0; i < 4; i++)
	{
		if(check(pos_x+2*dx[i]) && check(pos_y+2*dy[i]) )
		{ 
			pos_x += 2 * dx[i];
			pos_y += 2 * dy[i];

			
			if (dx[i] == 0)//U,D -> L,R
			{
				if (check(pos_x + 1))
					result++;
				if (check(pos_x - 1))
					result++;
			}
			else
			{
				if (check(pos_y + 1))
					result++;
				if (check(pos_y - 1))
					result++;
			}
			
		}
		pos_x = (int)pos[0] - 96;
		pos_y = (int)pos[1] - 48;
	}

	cout << result;
}

int check(int x)
{
	if (x > 0 && x <= 8)
		return 1;
	else
		return 0;
}