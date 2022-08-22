#include <stdio.h>
#include<vector>
#include<iostream>
#include<string>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<cmath>
#include<algorithm>
using namespace std;


int main() {
	long long int a[5];
	long long int min = 10;
	long long int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		sum += a[i]-(a[i]%10);
		if (a[i] % 10 > 0)
		{
			sum += 10;
			if (a[i] % 10 < min)min = a[i] % 10;
		}
	}
	cout << sum - ((10 - min)%10) << endl;

	return 0;
}
