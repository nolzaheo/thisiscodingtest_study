#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int N, K,cnt=0;
	cin >> N >> K;

	while (N % K != 0)
	{
		N -= 1;
		cnt++;
	}

	while (N != 1)
	{
		N /= K; 
		cnt++;
	}

	cout << cnt;
}