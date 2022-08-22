#include <bits/stdc++.h>
using namespace std;
#define int long long
int x, y;
signed main() {
cin>>x>>y;
if(y%2==0&&(y-x*2)<=x*2) cout<<"Yes\n";
else cout<<"No\n";
}
