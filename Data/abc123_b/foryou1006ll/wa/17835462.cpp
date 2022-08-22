#include <iostream>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <limits>
#include <algorithm>
#include <functional>

#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> left_time(5, 0);

	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int time;
		cin >> time;

		left_time[i] = 10 - (time % 10);

		result += time;
	}

	sort(left_time.begin(), left_time.end());

	for (int i = 0; i < 4; i++)
	{
		result += left_time[i];
	}

	cout << result;

	return 0;
}