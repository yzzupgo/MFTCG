#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define INF 1LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
int main() {
int X,Y;cin >> X >> Y;
int tmp = X*2;
if(Y / 2 <= tmp && tmp <= Y && Y % 2 == 0)cout << "Yes" << endl;
else cout << "No" << endl;
}
