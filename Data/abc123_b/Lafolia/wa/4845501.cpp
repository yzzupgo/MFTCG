#include <bits/stdc++.h>

using namespace std;
using llong = long long;
using ldbl = long double;
using P = pair<llong, llong>;

#define ALL(x) x.begin(), x.end()

const llong inf = llong(1e18)+7;
const llong mod = 1e9+7;

int main(){
	int a;
	int ans = 0;
	int mini = 9;
	for(int i = 0; i < 5; i++){
		cin >> a;
		ans += (a/10 + (a%10 != 0))*10;
		if(a%10)
			mini = min(mini, a%10);
	}

	cerr << mini << endl;
	cout << ans - (10-mini) << endl;


	return 0;
}