#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define INF (int)(1e9)
#define MAXX 1.1529215e+18
#define inf 999999
#define EPS (1e-7)
#define rep(i,n) for(int i=0; i<(int)(n);i++)
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define ALL(a) a.begin(),a.end()
#define RALL(a) a.begin(),a.end(),greater<int>()
#define PI acos(-1.0)
const ll MOD = 1e9+7;
const int MAX = 10000000;
template<typename T1, typename T2> inline bool chmin(T1 &a, T2 b) { if (a > b) { a = b; return 1; } return 0; }
template<typename T1, typename T2> inline bool chmax(T1 &a, T2 b) { if (a < b) { a = b; return 1; } return 0; }
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }
int main(){
int x,y;
cin >> x >> y;
rep(i,x+1){
int sum = i*2 + (x-i)*4;
if(sum == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
