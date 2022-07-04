#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {

	int N;

	vector<int> p;

	for (int i = 0; i < 5; i++)
	{
		int c;
		cin >> c;
		p.push_back(c);
	}

	sort(p.begin(), p.end());

	int result = 0;
	int count = 0;

	for (int i = 0; i < p.size(); i++)
	{
		count++;

		if (count >= p[i])
		{
			result += 1;
			count = 0;
		}
	}

	cout << result;
}