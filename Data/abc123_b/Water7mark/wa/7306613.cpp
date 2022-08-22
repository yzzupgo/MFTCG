#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}

template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

int main() {
	int menu_array[5];
	int temp;
	int sum = 0;
	int min = 9999;
	int flg2 = 0;

	for (int i = 0; i < 5; i++) {
		cin >> temp;

		menu_array[i] = temp;

		if (temp % 10 != 0 && flg2 == 0) {
			if (min == 9999) {
				min = temp;
			}
			flg2++;
		}



		if (temp % 10 != 0) {
			if ((min % 10) > (temp % 10)) {
				min = temp;
			} else {
				continue;
			}
		}

	}

	int flg = 0;

	for (int i = 0; i < 5; i++) {
		if (menu_array[i] == min && flg == 0) {
			flg++;
			continue;
		} else if (menu_array[i] % 10 == 0) {
			sum += menu_array[i];
		} else {
			sum += menu_array[i] + (10 - menu_array[i] % 10);
		}
	}

	sum += min;

	cout << sum << endl;

}
