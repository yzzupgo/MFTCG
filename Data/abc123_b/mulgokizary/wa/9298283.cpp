#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n=5;
ll a[6];
int main(){
	ios::sync_with_stdio(false);
	ll mx=0;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
		
	}
	ll k;cin >> k;
	if(a[5]-a[1]>k) cout << ":(\n";
	else cout << "Yay!";
}