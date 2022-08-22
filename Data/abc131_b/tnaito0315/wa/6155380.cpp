#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i = 0;i < n;i++)
#define REPR(i,n) for(int i = n-1;i >= 0;i--)
#define FOR(i,m,n) for(int i = m;i < n;i++)
#define ll long long
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll n, l;
cin >> n >> l;
ll sum = ((l + (l+n-1)) * n)/2;
ll ans;
if (l >= 0){ ans = sum - n; }
else if (n+l >= 0){ ans = sum; }
else { ans = sum - (l+n-1); }
cout << ans << endl;
}
