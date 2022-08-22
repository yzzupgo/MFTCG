#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define rrep(i,n) for(int i = (int)(n); i>=0; --i)
struct fast_ios { fast_ios(){cin.tie(0); ios::sync_with_stdio(false); cout << fixed << setprecision(20);} } fast_ios_;
int main()
{
int X, Y;
cin >> X >> Y;
for(int x=0, y=X;x<=X;x++,y--)
{
if(x*2+y*4 == Y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
