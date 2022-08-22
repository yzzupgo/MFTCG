#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
#include <cstdint>
#include <string>
#include <sstream>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using P=pair<ll,ll>;
const int INF=1001001001;
const int mod=1e9+7;
int main() {
int x,y;cin>>x>>y;
if(4*x>=y&&(4*x-y)%2==0&&(4*x-y)/2<=x){cout<<"Yes"<<endl;}
else{cout<<"No"<<endl;}
return 0;
}
