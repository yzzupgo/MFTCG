#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> K(5);
	for(int i = 0 ; i < 5 ; i++){
		cin >> K[i];
	}
	vector<double> k(5);
	for(int i = 0 ; i < 5 ; i++){
		k[i] = K[i];
	}
	for(int i = 0 ; i < 5 ; i++){
		k[i] = ceil(k[i]/10)*10;
	}
	int n=20;
	for(int i = 0 ; i < 5 ; i++){
		if(K[i]%10 != 0){
		n = min(n,K[i]%10);
		}
	}
	int ans = 0;
	for(int i = 0 ; i < 5 ; i++){
		ans += k[i];
	}
	if(n == 20){
	cout << ans << endl;
	return 0;
}
	cout << ans + n -10 << endl; 
}
