#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	if(n <= 5)
		cout << "0" << endl;
	else if(n >= 6 && n <= 12)
		cout << m / 2 << endl;
	else
		cout << m << endl;
} 
