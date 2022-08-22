#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i,n) for(int i = 0; i < (n); ++i)
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if ((4*x - y) >= 0 && ((4*x - y) & 1) == 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
