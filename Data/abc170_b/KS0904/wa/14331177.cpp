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
int t,k;
rep(i,101){
t = i;
k = X - t;
if(Y < (2*t + 4*k)) continue;
if(k < 0) break;
if((2*t + 4*k) == Y){
ans = "Yes";
break;
}
}
cout << t << " " << k << endl;
cout << ans << endl;
return 0;
}
