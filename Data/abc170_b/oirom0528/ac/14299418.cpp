#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
ll x, y; cin >> x >> y;
for (ll i=0; i<=x; i++)
{
ll t = i*2;
ll r = (x-i)*4;
if (t+r==y) {
cout << "Yes" << "\n";
return 0;
}
}
cout << "No" << "\n";
return 0;
}
