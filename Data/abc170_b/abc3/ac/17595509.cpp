#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
#include <cstdint>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
const int mod=1000000007;
int main() {
int X,Y;
cin>>X>>Y;
int a=Y-2*X,b=4*X-Y;
if(a>=0&&a%2==0&&b>=0&&b%2==0){cout<<"Yes"<<endl;}
else{cout<<"No"<<endl;}
return 0;
}
