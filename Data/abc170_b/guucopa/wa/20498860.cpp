#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
#define drep(i,cc,n) for(int i=cc;i>=n;--i)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const long long INF = 1LL <<60;
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b) {
if (b==0) return a;
else return gcd(b, a%b);
}
ll lcm(ll a, ll b) {
return a * b / gcd(a, b);
}
ll choose2(ll n){
return n*(n-1)/2;
}
int main(){
int x,y;
cin >> x >> y;
rep(i,0,x){
rep(j,0,x-i){
if(2*i + 4*j == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
