#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf 1e18
int main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a, b;
cin >> a >> b;
if (b >= 2 * a && b <= 4 * a) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
