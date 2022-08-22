#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
using namespace std;
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }
int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
int main() {
int n;
cin >> n;
int digits = log10(n);
int ans = 0;
if(digits%2==0) ans = n;
for(int i=digits-1; i >=0; i--) {
cout << "i: " << i << endl;
if(i%2==0) ans += pow(10, i+1) - 1;
else ans -= pow(10, i+1) - 1 ;
}
cout << ans << endl;
return 0;
}
