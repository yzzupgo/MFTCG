#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stdlib.h>
#define ll long long
#define MOD_P 1000000007
using namespace std;

int main()
{
	int dish;
	int size;
	int min = 15;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> dish;
		if (dish % 10) {
			sum += dish + 10 - dish % 10;
		} else {
			sum += dish;
		}
		if (dish % 10 != 0 && dish % 10 < min) {
			min = dish % 10;
		}
	}
	sum -= (10 - min);

	printf("%d", sum);

	return 0;
}