#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
cin.tie(nullptr)->sync_with_stdio(false);
int n,l;
cin >> n >> l;
int mn = (int)1e9;
int sum = 0;
for(int i = 1; i<=n; i++){
sum+=l+i-1;
mn = min(mn,abs(l+i-1));
}
cout << sum-mn << "\n";
return 0;
}
