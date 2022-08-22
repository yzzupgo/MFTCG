#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if ((y-2*x) >= 0 && !((y-2*x) & 1) && (4*x - y) >= 0 && !((4*x - y) & 1)) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
