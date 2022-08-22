#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
const ll INF = 1LL<<60;
int main()
{
int X,Y;
cin >> X >> Y;
string ans = "No";
rep(i,100){
int t = i + 1;
int k = X - t;
if((2*t + 4*k) == Y) ans = "Yes";
}
cout << ans << endl;
return 0;
}
