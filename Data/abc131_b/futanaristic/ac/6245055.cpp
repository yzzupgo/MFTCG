#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int n,l;
cin >> n >> l;
int ans = l*n + (n - 1)*n/2;
int low = LONG_MAX;
for(int i = 1 ; i <= n ; i ++){
if(abs(l + i - 1) < abs(low)) low = (l + i - 1);
}
cout << ans - low;
}
