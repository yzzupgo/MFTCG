#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a, b, c, d, e, time, min, i,count,k;
	int s[5];
	cin >> a >> b >> c >> d >> e;
	min = 9, count = 0, time = 0;
	s[0] = a % 10, s[1] = b % 10, s[2] = c % 10, s[3] = d % 10, s[4] = e % 10;
	for (i = 0; i < 5; i++) {

		if (s[i] < min&&s[i]!=0) {
			min = s[i];
			k = i;
		}
	}
	for (i = 0; i < 5; i++) {
		if (i == k) {
			continue;
		}
		else {
			while (s[i]>0&&s[i]<10) {
				count++;
				s[i] += 1;
			}
			if (i == 0) {
				a += count;
				count = 0;
			}
			else if (i == 1) {
				b += count;
				count = 0;
			}
			else if (i == 2) {
				c += count;
				count = 0;
			}
			else if (i == 3) {
				d += count;
				count = 0;
			}
			else if (i == 4) {
				e += count;
				count = 0;
			}

		}
	}
	time = a + b + c + d + e;
	cout << time << endl;
	return 0;
}