#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> menu(5);
	int min = 0, answer = 0;
	for (int i = 0;i < 5; i++){
		cin >> menu.at(i);
		if ((min > (menu.at(i) % 10)) && ((menu.at(i) % 10) != 0)){
			min = (menu.at(i) % 10);
		}
	}
	for (int i = 0; i < 5; i++){
		if (menu.at(i) % 10){
			menu.at(i) = ((menu.at(i) /10) + 1) * 10;
		//	cout << "dbg " << i << " " << menu.at(i) << endl;
		}
		answer += menu.at(i);
	}
	//cout << "dbg min" << min << " ans" << answer << endl;
	if (min){
		cout << answer - 10 + min << endl;
	}else{
		cout << answer << endl;
	}

	return 0;
}
