#include <bits/stdc++.h>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int a, b, c, d;
cin >> a, b;
if (a >= 13) cout << b << endl;
if (12 >= a >= 6)cout << b / 2 << endl;
if (a <= 5)cout << 0 << endl;
return 0;
}
