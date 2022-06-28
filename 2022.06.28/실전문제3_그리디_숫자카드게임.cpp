#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> arr(N, vector<int>(M));
	vector<int> tmp;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
		tmp.push_back(*min_element(arr[i].begin(), arr[i].end()));
	}

	cout << *max_element(tmp.begin(), tmp.end());
}