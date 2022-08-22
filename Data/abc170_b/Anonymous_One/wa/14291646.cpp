#include <bits/stdc++.h>
using namespace std;
#define fast \
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define ll long long
#define f(i,n) for (int i = 0; i < n; i++)
#define ff(i,n) for (int i = 1; i <= n; i++)
#define F first
#define S second
#define vpii vector<pair<int,int> >
#define sz size()
#define all(v) v.begin(),v.end()
#define pb push_back
#define PB pop_back
#define vl vector<int>
#define mp make_pair
#define mod 1000000007
typedef unsigned long long ull;
const int N = 2000005;
const int MOD = 998244353 ;
void solve(){
int x, y;
cin>>x>>y;
if(y > (4*x) || y < (2*x)){cout<<"No";}
else cout<<"Yes";
}
int32_t main() {
fast
int t;
t = 1;
while(t--)solve();
return 0;
}
