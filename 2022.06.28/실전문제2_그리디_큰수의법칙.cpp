#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, K;

	cin >> N >> M >> K;

	vector<int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int first = arr[N - 1];
	int second = arr[N - 2];

	int result = 0;

	while (M--)
	{
		for (int i = 0; i < K; i++)
		{
			result += first;
			M--;
		}
		result += second;
	}

	cout << result;
}