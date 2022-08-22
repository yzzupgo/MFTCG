#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	vector<int> dish(5);
	for (int i = 0; i < dish.size(); i++) {
		cin >> dish[i];
	}
	
	int ans = 0;
	while (dish.size() > 0) {
		int min_index = 0;
		for (int i = 1; i < dish.size(); i++) {
			if ((10 - dish[i] % 10) % 10 < (10 - dish[min_index] % 10) % 10) {
				min_index = i;
			}
		}
		ans += dish[min_index] + ((dish.size() > 1) ? (10 - dish[min_index] % 10) % 10 : 0);
		dish.erase(dish.begin() + min_index);
	}
	
	cout << ans << endl;
}