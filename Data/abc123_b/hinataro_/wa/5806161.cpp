#include<iostream>
#include<cmath>
#include<algorithm>
#include <cassert>
#include<string>
#include<vector>
#include <utility>
#include <math.h>
#define INF 1000000000;
using namespace std;
char mas[200500];
int main() {
	int menu[7],counto=0,Key=0;
	for (int i = 0; i < 5; i++) {
		cin >> menu[i];
		if (menu[i] % 10 == 0) {
			counto += menu[i];
		}
		else {
			counto += (((menu[i] / 10) + 1) * 10);
		}
		Key = max(Key, (10 - menu[i]));
	}
	cout << counto-Key << endl;
	return 0;
}