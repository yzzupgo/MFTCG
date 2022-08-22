#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair <int, int>;
const double PI = acos(-1);
const ll MOD = 1000000007;
int main() {
int X, Y;
cin >> X >> Y;
bool h = 0;
int dif = Y - X * 2;
if (dif / 2 <= X && dif > 0) h = 1;
if(h) cout << "Yes" << endl;
else cout << "No" << endl;
}
