#include<stdio.h>
int main(void)
{
	int a[5], time = 0;
	int i;
	int temp[5] = { 0 }, co = 0, min=9, ama;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 10 < min % 10 && a[i] % 10 != 0) {
			min = a[i];
		}
	}
	for (i = 0; i < 5; i++) {
		if (min == a[i]) {
			co++;
		}
	}
	for (i = 0; i < 5; i++) {
		if (a[i] != min) {
			time = time + a[i];
			if (a[i] % 10 != 0) {
				time = time + (10 - a[i] % 10);
			}
		}
		else {
			if (co >= 2) {
				time = time + a[i];
				if (a[i] % 10 != 0) {
					time = time + (10 - a[i] % 10);
				}
				co--;
			}
			else {
				time = time + min;
			}
		}
	}
	printf("%d\n", time);
	return 0;
}