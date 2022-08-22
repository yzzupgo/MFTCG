#include<iostream>
#include<fstream>
using namespace std;

int main() {

	int temp;
	int time = 0, min = 10;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		int mod10 = temp % 10;
		if (mod10 && mod10 < min) min = mod10;

		time += temp / 10 * 10;
		if (mod10) time += 10;
	}

	time = time - 10 + min;
	cout << time;
	return 0;
}