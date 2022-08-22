#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i = 0; i < n; ++i)
#define all(x) (x).begin(), (x).end()
const int inf = 1010000000;
using ll = long long int;
using vi = vector<int>;
using vl = vector<ll>;
int main() {
int x, y;
cin >> x >> y;
bool flg = false;
for (int i = 1; i <= x; ++i) {
int turu = i, kame = x - i;
int tmp = y;
tmp = tmp - turu * 2 - kame * 4;
if (tmp == 0) flg = true;
}
if (flg) cout << "Yes" << endl;
else cout << "No" << endl;
}
