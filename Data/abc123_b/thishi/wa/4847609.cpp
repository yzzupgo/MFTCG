#include <string>
#include <algorithm>
#include <vector> 
#include <math.h>
#include <iostream>
using namespace std;
long long mod = 1000000000 + 7;


int main()
{
	
	vector<int> time;
	for (int i = 0; i < 5; i++) {
		int k = 0;
		cin >> k;
		time.push_back(k);
	}
	
	sort(time.begin(),time.end());
	int ans = 0;
	int sh = 11;
	for (int i = 0; i < 5; i++) {
		if (time[i] % 10 == 0) {
			ans = i + time[i];
		}
		else {
			sh = min(sh, time[i] % 10);
			ans = ans + time[i] - time[i] % 10 + 10;
		}
	}
	ans = ans + sh - 10;

	cout << ans << endl;
	return 0;

}
