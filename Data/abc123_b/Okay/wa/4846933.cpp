#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

#define int long long
#define rep(i,n) for(int i = 0; i < (n); i++)
#define INF ((long long)1e18)
#define MOD ((int)1e9+7)
#define endl "\n"

#define yn(f) ((f)?"Yes":"No")
#define YN(f) ((f)?"YES":"NO")

#define MAX

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);
	
	int a[10], ans = 0, ans2 = INF;
	
	for(int i = 0; i < 5; i++){
		cin>>a[i];
		ans += ((a[i]+9)/10)*10;
		cout<<ans<<endl;
	}
	for(int i = 0; i < 5; i++){
		ans2 = min(ans2, ans-((a[i]+9)/10)*10 + a[i]);
	}
	
	cout<<ans2<<endl;
	
	return 0;
}