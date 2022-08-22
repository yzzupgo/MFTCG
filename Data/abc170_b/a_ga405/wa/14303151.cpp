#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using p = pair<int, int>;
int main() {
int x, y;
cin >> x >> y;
if (y % 2 == 1)
cout << "No" << endl;
else {
int a;
a = 4 * x - y;
if (a < 0)
cout << "No" << endl;
else
cout << "Yes" << endl;
}
return 0;
}
