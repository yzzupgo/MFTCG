#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int MAX_N = 1e5 + 5;
const int MAX_L = 20;
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
#define LSOne(S) (S & (-S))
#define isBitSet(S,i) ((S >> i) & 1)
void solve()
{
int x,y;
cin>>x>>y;
if(x==1 && (y%2 == 0 || y%4 == 0))
{ cout<<"Yes";
return;
}
for(int i = 1; i<=x; i++)
{
int c,t;
c=i;
t=x-i;
if(c*2 + t*4 == y || c*4 + t*2 == y)
{
cout<<"Yes";
return;
}
}
cout<<"No";
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int tc = 1;
for (int t = 1; t <= tc; t++) {
solve();
}
}
