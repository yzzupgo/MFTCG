#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> menu(5);
	int min = 10, answer = 0;
	for (int i = 0;i < 5; i++){
		cin >> menu.at(i);
		//cout << " dbg men " << menu.at(i) << endl;
		if ((min > (menu.at(i) % 10)) && ((menu.at(i) % 10) != 0)){
			//cout << "dbg minin " << min << (menu.at(i) % 10) << endl;
			
			min = (menu.at(i) % 10);
		}
	}
	if (min == 10){
		min = 0;
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
