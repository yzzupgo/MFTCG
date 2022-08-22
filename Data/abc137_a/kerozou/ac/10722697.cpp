#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define INF 1LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair<ll, ll>
#define F first
#define S second
const int MOD = 1000000007;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }
int main(){
int A,B;cin >> A >> B;
int a = A+B; int b = A-B; int c = A*B;
int ans = max(a,b); ans = max(ans,c);
cout << ans << endl;
}
