#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define in insert
#define pb emplace_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define Rep(i,a,b) for(int i=a;i<=b;i++)
#define Rev(i,a,b) for(ll i=a;i>=b;i--)
#define FOR(m) Rep(i,1,m)
#define For(m) Rep(i,0,m-1)
#define Rbl(x,a) for(auto &x : a)
#define FIO ios::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define vpii vector<pii>
#define vpll vector<pll>
#define all(x) (x).begin(),(x).end()
#define sz(x) (int) (x).size()
const ll INF = 0x3f3f3f3f3f3f3f3fll;
#define mod 1000000007
int main()
{
FIO
ll x, y;
cin >> x >> y;
if(y <= 4*x && y >= 2*x && y % 2 == 0)
cout << "Yes\n";
else
cout << "No\n";
return 0;
}
