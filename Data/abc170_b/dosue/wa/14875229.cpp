#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(a) (a).begin(), (a).end()
using P = pair<int, int>;
using ll = long long;
using ld = long double;
typedef vector<int> vi;
int dx[4] = { 0, 1, 0,-1 };
int dy[4] = { 1, 0,-1, 0 };
const ll MOD = 1000000007;
signed main() {
int X,Y;
cin >> X >> Y;
bool flag=false;
for (int i = 0; i < X; i++) {
if (2*i+4*(X-i)==Y) flag=true;
}
if(flag) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
