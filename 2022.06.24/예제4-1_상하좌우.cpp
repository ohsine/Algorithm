#include <string>
#include <iostream>

using namespace std;

int main()
{
	int dr[4] = { 0,0,-1,1 };
	int dc[4] = { -1,1,0,0 };
	char dir[4] = { 'L','R','U','D' };

	int N;
	int CR = 1, CC = 1;

	cin >> N;
	cin.ignore();

	string plans;
	getline(cin, plans);

	for (int i = 0; i < plans.size(); i++)
	{
		int nr = 0, nc = 0;

		for (int j = 0; j < 4; j++)
		{
			if (plans[i] == dir[j])
			{
				nr = CR + dr[j];
				nc = CC + dc[j];
				break;
			}
		}

		if (nr < 1 || nr > N || nc < 1 || nc > N)
			continue;

		CR = nr;
		CC = nc;
	}

	cout << CR << ' ' << CC;
}