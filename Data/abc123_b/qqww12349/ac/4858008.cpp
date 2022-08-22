#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int  ans=0,i,min;
	bool mi=false;
	vector<int> a(5),b(5);
	cin >> a[0] >> a[1] >>a[2]  >>a[3]>> a[4];
	min = a[0];
	for (i = 0; i < a.size(); i++) {
		if (a[i] % 10 < min%10&&a[i] % 10 != 0) {
			min = a[i];
		}
	}
	for (i = 0; i<a.size(); i++) {
		if (a[i] != min||mi) {
			ans += a[i];
			if (ans % 10 != 0 ) {
				ans = (ans / 10 + 1) * 10;

			}
		}
		else {
			mi = true;
		}
	}
	ans += min;
	cout << ans << endl;
}