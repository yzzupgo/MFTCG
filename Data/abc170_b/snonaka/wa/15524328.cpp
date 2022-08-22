#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>ll(b);i--)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define INF 1000000000000
#define MOD 1000000007
#define MAXR 100000
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define Umap unordered_map
#define Uset unordered_set
signed main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int X, Y;
cin >> X >> Y;;
bool flag = false;
REP(i, X) {
int sosu = i*2 + (X-i)*4;
if (sosu == Y) flag = true;
}
if (flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
