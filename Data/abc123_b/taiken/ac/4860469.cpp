#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t[2][5], m = 11, to = 0, c, co = 0;
	for (int x = 0; x < 5; ++x) {
		cin >> t[0][x];

	}
	for (int x = 0; x < 5; ++x) {
		t[1][x] = t[0][x] % 10;

	}
	for (int x = 0; x < 5; ++x) {
		if (t[1][x] == 0)t[1][x] = 10;

	}
	for (int x = 0; x < 5; ++x) {
		if (t[1][x] < m)m = t[1][x];

	}
	for (int x = 0; x < 5; ++x) {
		if (t[1][x] == 10)t[1][x] = 0;

	}
	for (int x = 0; x < 5; ++x) {
		if (t[1][x] !=m) {
			if (t[1][x] == 0)to = to + t[0][x];
			else to = to + (t[0][x] / 10 + 1) * 10;
			
		}
		else {
			if(co==1)to = to + (t[0][x] / 10 + 1) * 10;
			else c = x;
			co = 1;
		}
		
	}
	if (co ==1) {
		to = to + t[0][c];
	}
	cout << to << endl;

}
