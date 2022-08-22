#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<stack>
#include<queue>
#include<tuple>
#include<cassert>
#include<set>
using ll = long long;
using namespace std;
const ll INF = 1000000000000000000;
const ll mod = 1000000007;
ll test[12345678];
signed main() {
ll n = 0, m, q, k, a = 0, b = 0, c = 0, d = 0, cnt = 0; string s, t;
vector<ll> v(n);
cin >> a >> b;
cnt = a * 2;
while (true) {
if (cnt == b) { cout << "Yes" << endl; return 0; }
if (cnt > a * 4) { break; }
cnt += 2;
}
cout << "No" << endl;
return 0;
}
