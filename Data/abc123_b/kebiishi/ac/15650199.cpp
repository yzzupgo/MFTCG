#include<iostream>
#include<stdio.h>
using namespace std;

int main(void) {
	int menu[5];
	int diffMin = 10;
	int last;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &menu[i]);
		if ((menu[i] - 1) % 10 < diffMin) {
			diffMin = menu[i] % 10;
			last = i;
		}
	}
	// cout << last << "\n";
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		if (i == last) ans += menu[i];
		else ans += ((menu[i] - 1) / 10 + 1) * 10;
		// cout << i << " " << ans << "\n";
	}
	printf("%d\n", ans);
	return 0;
}
