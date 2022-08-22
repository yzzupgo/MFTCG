#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
int x, y;
cin >> x >> y;
int leg = 2 * x;
rep(i, x + 1) {
leg += 2 * i;
if (leg == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
