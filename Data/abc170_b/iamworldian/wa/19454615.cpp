#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);
const double EPS = 1e-9;
const double PI = acos(-1);
const int knightDir[8][2] = {{-2,-1},{-2,1},{-1,2},{1,2},{2,-1},{2,1},{-1,-2},{1,-2}};
const int dx[] = {0 , 1 , 0 , -1};
const int dy[] = {1 , 0 , -1 , 0};
#define MAX 2000015
const ll MOD = 998244353;
inline ll mod(ll a){return ((a % MOD + MOD) % MOD);}
inline ll add(ll a, ll b){return mod(mod(a) + mod(b));}
inline ll sub(ll a, ll b){return mod(mod(a) - mod(b));}
int main()
{
FAST
int t;
t = 1;
while(t--)
{
int x , y;
cin >> x >> y;
for(int i = 1 ; i <= x ; i++)
{
if(i * 2 + (((x - i)) * 4) == y)
{
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
}
