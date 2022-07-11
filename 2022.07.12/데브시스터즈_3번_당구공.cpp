#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

constexpr double BallDiameter = 2;

double GetDistanceFromStart(vector<double> P1)
{
	return sqrt(P1[0] * P1[0] + P1[1] * P1[1]);
}

int main() {
	int answer = -2;

	vector<vector<double>> objectBallPosList = {
		{15.0,5.0},
		{13.0,3.0},
		{12.0,1.0},
	{8.0,6.0}
	};

	vector<double> hitVector = { 1.0,1.0 };
	vector<pair<double, int>> Touch;


	double dist = 3;

	for (int i = 0; i < objectBallPosList.size(); i++)
	{
		if (hitVector[0] == 0)
		{
			dist = objectBallPosList[i][0];
		}
		else if (hitVector[1] == 0)
		{
			dist = objectBallPosList[i][1];
		}
		else
		{
			double a = -1 * hitVector[1] / hitVector[0];
			dist = abs(a * objectBallPosList[i][0] + objectBallPosList[i][1]) / sqrt(a * a + 1);
		}
		
		if (dist < BallDiameter)
		{
			double sec = GetDistanceFromStart(objectBallPosList[i]);
			cout << dist;
			Touch.push_back(make_pair(sec, i));
		}
	}

	if (Touch.empty())
	{
		cout << -1;
		return -1;
	}

	pair<double,int> v = *min_element(Touch.begin(), Touch.end());

	answer = v.second;

	cout << answer << endl;

	return answer;
}