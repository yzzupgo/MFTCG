#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector <int> val(5);
	vector <int> val_(5);
	int x=0;

	for (int i = 0; i < 5; i++) {
		cin >> val[i];
		val_[i] = val[i] % 10;
		x += val[i] - val_[i] + 10;
		if (val_[i] == 0) val_[i] += 10;
	}

	x = x + *min_element(val_.begin(), val_.end()) -10;


	cout << x << endl;
}