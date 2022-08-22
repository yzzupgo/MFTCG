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
using P = pair<int,int>;
const int INF=1001001001;
const int mod =1e9+7;
int main() {
int x,y;cin>>x>>y;
if(x*4<y||2*x>y||(4*x-y)%2!=0){cout<<"No"<<endl;}
else {cout<<"Yes"<<endl;}
return 0;
}
