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
int x = Y/2 - X;
if(0<=x && x <=X)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
