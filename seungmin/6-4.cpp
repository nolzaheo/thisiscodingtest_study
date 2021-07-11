#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, K;
	int* A;
	int* B;

	cin >> N >> K;

	A = new int[N];
	B = new int[N];

	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];

	sort(A,A+N);
	sort(B,B+N);

	int pos = 0;
	while (pos < K && A[pos]<B[N-1-pos])
	{
		int tmp = A[pos];
		A[pos] = B[N - 1 - pos];
		B[N - 1 - pos] = tmp;
		pos++;
	}

	int ret = 0;
	for (int i = 0; i < N; i++)
		ret += A[i];

	cout <<ret<< endl;
}