#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define endl '\n'
int t=1;
void solve(){
int n,l;
cin >> n >> l;
for(int i=0;i<=n;i++){
if((l+2*i)==4*n){cout << "Yes" <<endl;return;}
}
cout << "No" <<endl;
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
for(int i=1;i<=t;i++){
solve();
}
return 0;
}
