#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define file "test"
#define forr(_a,_b,_c) for(_a = _b; _a <=_c; ++_a)
#define ford(_a,_b,_c) for(_a = _b; _a >=_c; --_a)
#define forf(_a,_b,_c) for(_a = _b; _a < _c; ++_a)
#define vi vector
#define sz(_v) _v.begin(), _v.end()
const ll mod = ll(1e9) + 7;
const ll inf = ll(1e16) + 1;
bool testc = 0;
const int N = 2e5 + 5;
int n, i, a, b;
void solve() {
cin >> a >> b;
if(a <= 5) {
cout << 0;
return;
}
if(a <= 13) {
cout << b / 2;
return;
}
cout << b;
}
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
#endif
int testcase = 1;
if(testc) cin >> testcase;
while(testcase-- > 0) {
solve();
}
return 0;
}
