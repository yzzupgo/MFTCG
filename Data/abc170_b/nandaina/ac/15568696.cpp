#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define rept(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define all(v) v.bigin(),v.end()
#define MAX(a,b) a=a>b?a:b
#define MIN(a,b) a=a<b?a:b
int main(){
ll x,y;
cin>>x>>y;
if(y>=x*2&&y<=x*4&&y%2==0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
