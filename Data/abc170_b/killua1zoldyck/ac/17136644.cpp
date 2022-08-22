#include<bits/stdc++.h>
#define MSET(x,y) memset(x,y,sizeof(x))
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define SZ size()
#define M 500005
#define ll long long
#define ld long double
#define INF 1e18
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
ll MOD = 1000000007;
string yes = "Yes\n";
string no = "No\n";
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll x,y;
cin>>x>>y;
if(y-2*x>=0 and (y-2*x)%2 == 0 and (y-2*x)/2<=x) cout<<yes;
else cout<<no;
}
