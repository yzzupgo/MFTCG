#include <bits/stdc++.h>
#include <math.h>
#define rep(i,n) for (int i = 0; i< (n); i++)
#define REP(i,n) for (int i = 1; i<= (n); i++)
#define MAX_MOD 1000000007LL
#define MOD 998244353LL
const long double PI = acos(-1);
using ll = long long;
using ld = long double;
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (y % 2 != 0) {
cout << "No" << endl;
} else {
for (int i = 0; i<= (x); i++){
if (y == i*2 + (x-i)*4) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
