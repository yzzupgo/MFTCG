#include<iostream>
#include<stdio.h>
#include<string>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define all(a) (a).begin(),(a),end()
#define rep(i,n) for (ll i = 0; i < (n); ++i)
void outi(int x) { cout << x << endl; }
void outl(ll x) { cout << x << endl; }
void outs(string x) { cout << x << endl; }
ll max(ll a, ll b) {
ll max;
if (a > b) max = a;
else max = b;
return max;
}
ll min(ll a, ll b) {
ll min;
if (a < b) min = a;
else min = b;
return min;
}
int main() {
int x, y;
cin >> x >> y;
bool can = true;
if (y % 2 != 0) can = false;
int res = y - 4 * x;
if (res > 0) can = false;
int ans = y - 2*x;
if (ans < 0) can = false;
cout << (can ? "Yes" : "No") << endl;
return 0;
}
