#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#define all(obj) (obj).begin(),(obj).end()
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define reps(i,a,n) for(long long i=(a);i<(long long)(n);++i)
#define rep(i,n) reps(i,0,n)
template<class T> inline bool chmin(T& a, T b) {if(a>b){a=b;return(true);}return(false);}
template<class T> inline bool chmax(T& a, T b) {if(a<b){a=b;return(true);}return(false);}
using ll=long long;
int main(void)
{
int x,y;
cin>>x>>y;
bool ok=true;
if(y<2*x) ok=false;
else {
int a=y-2*x;
if(a%2==1) ok=false;
else if(a/2>x) ok=false;
}
YesNo(ok);
}
