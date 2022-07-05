#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int result = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (result == 0 || s[i] == '0')
			result += s[i] - '0';
		else
			result *= s[i] - '0';
	}

	cout << result;
}