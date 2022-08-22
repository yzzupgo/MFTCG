#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <numeric>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
template<class T> inline bool chmin(T& a,T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a,T b) {if (a < b) {a = b; return true;} return false;}
const ll MOD = 1000000007;
const int INF = 1<<30;
int main(){
int a, b; cin >> a >> b;
int ans = a + b;
chmax(ans, a - b);
chmax(ans, a * b);
cout << ans << endl;
}
