#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> X(5);
	int sum;
	for(int i = 0; i < 5; i++){
		cin >> X.at(i);
		if(X.at(i)%10)
			X.at(i) = X.at(i)-X.at(i)%10+10;
		sum += X.at(i);
	}
	cout << sum << endl;
}