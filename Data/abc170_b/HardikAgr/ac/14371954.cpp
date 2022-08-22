#include <bits/stdc++.h>
#define limit (int)(2e5 + 5)
#define mod (int)(1e9 + 7)
using namespace std;
using lli = long long int;
using ulli = unsigned long long int;
using ld = long double;
int main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x,y;
cin >> x >> y;
if (y%2 != 0)
{
cout << "No";
return 0;
}
if (y > 4*x || y < 2*x)
{
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
