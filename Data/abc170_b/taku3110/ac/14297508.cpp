#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i)
#define rrep(i,j,n) for(ll i = (ll)(j); i < (ll)(n); i++)
#define mrep(i,n) for (ll i = (ll)(n); i > 0; i--)
#define be(v) (v).begin(), (v).end()
#define dcout cout << fixed << setprecision(20)
ll INF = 1LL << 60;
ll mod = 1e9 + 7;
int main() {
int n,m;
cin >> n >> m;
for(int i=n;i>=0;i--) {
int a=n-i;
if(i*4+a*2==m) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
