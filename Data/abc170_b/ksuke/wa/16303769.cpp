#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(c) (c).begin(), (c).end()
#define pb push_back
#define eb emplace_back
const long long INF = 1LL<<60;
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main()
{
int X , Y;
cin >> X >> Y;
int a = 4*X-Y;
a /= 2;
if(a < 0)
{
cout << "No" << endl;
return 0;
}
int b = X -a;
if(b < 0)
{
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
