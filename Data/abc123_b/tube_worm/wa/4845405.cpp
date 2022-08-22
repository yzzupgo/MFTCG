#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <functional>
#include <string>
#include <stack>
#include <map>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;


int main()
{
	int max = 0;
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		int c;
		cin >> c;
		
		int ad = (c / 10 + 1) * 10;
		cnt += ad;
		if (max < ad - c)
			max = ad - c;
	}
	cout << cnt - max << endl;
	
	return 0;
}