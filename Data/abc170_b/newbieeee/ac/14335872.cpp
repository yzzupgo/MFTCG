#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define tc(t) int t; cin >> t; while (t--)
#define for0(i,n) for(int i = 0; i < n; i++)
#define pb push_back
#define int long long
void solve()
{
int x, y;
cin>>x>>y;
if(y<2*x || (y - 2*x) % 2 != 0 || 4*x < y || (4*x -y) % 2 != 0) {
cout<<"No";
}
else {
cout<<"Yes";
}
}
signed main() {
fio;
solve();
cout<<"\n";
return 0;
}
