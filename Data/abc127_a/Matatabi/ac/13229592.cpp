#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,n) for(int i=0;i<=n;i++)
#define repr(i,a,n) for(int i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define P pair<long long,long long>
#define uni(e) e.erase(unique(e.begin(),e.end()),e.end())
#define double long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int INF=1e10;
int MOD=1e9+7;
signed main(){
int a,b;
cin>>a>>b;
if(13<=a)
cout<<b<<endl;
else if(6<=a&&a<13)
cout<<b/2<<endl;
else
cout<<0<<endl;
}
