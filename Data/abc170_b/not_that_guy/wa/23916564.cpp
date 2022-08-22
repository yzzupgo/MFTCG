#include "bits/stdc++.h"
#define int long long
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define db(x...)
#endif
signed main(){
int x, y;
cin >> x >> y;
if((y % 2 == 0) && (y <= 4 * x) && (y >= 2 * x))
cout << "YES" << '\n';
else
cout << "NO" << '\n';
return 0;
}
