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
typedef unsigned long long ull;
using P=pair<ll,ll>;
const ll INF=1001001001;
const int mod=1e9+7;
void solve(){
int n,l;
cin>>n>>l;
int t=0,mn=INF,x=0;;
for(int i=0;i<n;i++){
t+=l+i;
if(chmin(mn,abs(l+i))){x=l+i;}
}
cout<<t-x<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}
