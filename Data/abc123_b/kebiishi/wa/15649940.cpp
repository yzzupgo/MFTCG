#include<iostream>
#include<stdio.h>
using namespace std;

int main(void) {
	int menu[5];
	int diffMax = 0;
	int last;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &menu[i]);
		if (menu[i] % 10 > diffMax) {
			diffMax = menu[i] % 10;
			last = i;
		}
	}
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		if (i == last) ans += menu[i];
		else ans += (menu[i] / 10) * 10;
	}
	printf("%d\n", ans);
	return 0;
}
