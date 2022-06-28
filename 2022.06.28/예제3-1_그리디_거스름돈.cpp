#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;

	int coins[] = { 500,100,50,10 };

	for (int i = 0; i < 4; i++)
	{
		count += n / coins[i];
		n %= coins[i];
	}

	cout << count;
}