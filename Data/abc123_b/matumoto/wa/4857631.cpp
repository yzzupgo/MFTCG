#include<stdio.h>
int main(void)
{
	int a[5], time = 0;
	int i;
	int temp[5] = { 0 }, co = 0, min = 10;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 10 < min && a[i] % 10 != 0) {
			min = a[i];
		}
	}
	for (i = 0; i < 5; i++) {
		if (a[i] != min) {
			time = time + a[i];
			if (a[i] % 10 != 0) {
				time = time + (10 - a[i] % 10);
			}
		}
		else if (a[i] == min) {
			time = time + min;
		}
	}
	printf("%d", time);
	return 0;
}