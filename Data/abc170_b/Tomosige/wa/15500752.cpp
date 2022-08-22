#include "bits/stdc++.h"
#define ll long long
#define pb push_back
#define pii pair<ll int,ll int>
#define vpii vector< pii >
#define vi vector<ll int>
#define vs vector< string >
#define vvi vector< vector< ll > >
#define inf 1'010'000'000'000'000'017LL
#define all(it,a) for(auto it=(a).begin();it!=(a).end();it++)
#define sz(x) (ll int)x.size()
#define rep(i,a,b) for(ll int i=a;i<b;i++)
#define repr(i,a,b) for(ll int i=a;i>b;i--)
#define lbnd lower_bound
#define ubnd upper_bound
#define mp make_pair
#define whatis(x) cout << #x << " is " << x << "\n";
#define graph(n) adj(n,vector< ll > () )
using namespace std;
template<class T>
bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T>
bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
void Main()
{
ll X, Y;
cin >> X >> Y;
bool ans = false;
rep(c, 1, 101) {
rep(t, 1, 101) {
if ((c + t == X) && (c * 2 + t * 4 == Y)) ans = true;
}
}
cout << (ans ? "Yes" : "No") << endl;
}
int main()
{
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
cout << fixed << setprecision(15);
Main();
return 0;
}
