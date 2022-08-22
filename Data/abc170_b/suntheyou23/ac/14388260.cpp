#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rep2(i,a,b) for(int i = (a); i < (b); i++)
typedef long long ll;
int main() {
int x, y;
cin >> x >> y;
double a = y / 2.0 - x;
double b = 2 * x - y / 2.0;
if (a == floor(a) && b == floor(b) && a >= 0 && b >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
