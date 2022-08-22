#include <bits/stdc++.h>

using namespace std;

int main() {
	int add = 10;
	int sum = 0;
	for(int i=0; i < 5; i++) {
		int val;
		cin >> val;
		
		int rest = val % 10;
		if(rest != 0) {
			val += (10 - rest);
		}
		
		sum += val;
		if(rest != 0) add = min(add, rest);
	}
	
	if(add != 10) sum += add;
	if(add != 0) sum -= 10;
	
	cout << sum;
	
	return 0;
}