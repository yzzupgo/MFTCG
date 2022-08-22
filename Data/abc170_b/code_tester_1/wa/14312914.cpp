#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1000000000 + 7;
#define endl '\n'
#define scan(s) scanf("\n%[^\n]", s);
#define rep(a) cout<<#a<<"-> ";for(int i=0;i<a.size();i++) cout<<i<<":"<<a[i]<<" ";cout<<endl;
#define val(a) cout<<#a<<"-> "<<a<<endl;
#define ok cout<<"ok"<<endl;
#define clock cout<<(double)clock()/CLOCKS_PER_SEC<<endl;
void solve()
{
int x,y;
cin>>x>>y;
int left=2*x;
int right=4*x;
if(left<=y && y<=right) cout<<"Yes\n";
else cout<<"No\n";
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tt = 1;
while (tt--) {
solve();
}
return 0;
}
