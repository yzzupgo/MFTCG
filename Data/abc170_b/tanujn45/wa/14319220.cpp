#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
set<pair<int, int>> dp;
string ans = "No";
void func(int x, int y) {
if(y < 0 || x < 0) return;
if(!y && !x) {
ans = "Yes";
return;
}
if(dp.find({x - 1, y - 2}) == dp.end()) {
dp.insert({x - 1, y - 2});
func(x - 1, y - 2);
}
if(dp.find({x - 1, y - 4}) == dp.end()) {
dp.insert({x - 1, y - 4});
func(x - 1, y - 4);
}
}
void testCase() {
int x, y;
cin >> x >> y;
if(y & 1 || x * 4 < y) {
cout << "No\n";
return;
}
cout << ans << endl;
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int T = 1;
while(T--) {
testCase();
}
}
