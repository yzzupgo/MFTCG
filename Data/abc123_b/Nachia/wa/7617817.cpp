#include<bits/stdc++.h>
using namespace std;




int main() {
	int a[5];
	for (int i = 0; i < 5; i++) { cin >> a[i]; }
	
	int c = 10;
	int p = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 == 0) {
			p += a[i] % 10;
		}
		else {
			c = min(a[i] % 10, c);
			p += a[i] % 10 + 1;
		}
	}

	cout << (p - 1) * 10 + c << endl;

	return 0;
}