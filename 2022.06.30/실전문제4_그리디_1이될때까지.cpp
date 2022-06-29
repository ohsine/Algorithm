#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int count = 0;

	while (N != 1)
	{
		if (N % K != 0)
			N -= 1;
		else
			N /= K;
		count++;
	}

	cout << count;
}