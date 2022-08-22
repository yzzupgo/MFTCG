#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
int x, y;
void init() {
}
void input() {
cin >> x >> y;
}
void solve() {
for (int i = 0; i <= x; i++) {
if (4 * i + 2 * (x - i) == y) {
cout << "Yes";
return;
}
}
cout << "No";
}
void output() {
}
int main()
{
int number_of_testcases = 1;
while (number_of_testcases--) {
init();
input();
solve();
output();
}
return 0;
}
