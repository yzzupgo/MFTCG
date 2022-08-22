#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int menu[7],counto=0,Key=10;
	for (int i = 0; i < 5; i++) {
		cin >> menu[i];
		if (menu[i] % 10 == 0) {
			counto += menu[i];
		}
		else {
			counto += (((menu[i] / 10) + 1) * 10);
			Key = min(Key, (menu[i] - (menu[i] / 10 * 10)));
		}
	}
	cout << counto-10+Key << endl;
	return 0;
}