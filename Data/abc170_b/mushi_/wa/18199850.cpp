#include "bits/stdc++.h"
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fo(i,a,b) for(int i=a; i<(b); ++i)
#define out(a) cout << a << endl
#define so(v) sort(v.begin(),v.end())
using namespace std;
using ll = long long;
int main()
{
int x, y; cin >> x >> y;
if (x == 1)
{
if (y == 2 || y == 4)
{
out("Yes");
}
else out("No");
return 0;
}
fo(i, 1, x)
{
if ( (i*2 + (x-i)*4) == y)
{
out("Yes");
return 0;
}
}
out("No");
}
