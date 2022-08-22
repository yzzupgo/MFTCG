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
		mx=max(mx,(10-(a[i])%10)%10);
		a[i]=a[i]+(10-(a[i])%10)%10;
		
		//cout << (10-(a[i])%10)%10 << endl;
		
	}
	//cout << mx << endl;
	ll ans=0;
	for(int i=1; i<=n ;i++){
		ans+=a[i];
	}
	cout << ans-mx << endl;
}