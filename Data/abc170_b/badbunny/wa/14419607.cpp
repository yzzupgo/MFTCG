#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi 3.1415926536
#define pb push_back
#define N 1000000007
#define M 998244353
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define nrep(i,a,b) for(int i=a;i>=b;i--)
int main(){
ll t,i,j,l,h,n,x,k,y;
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
cin>>x>>y;
if((y - 2*x)%4 != 0){
cout<<"No\n";
return 0;
}
h = (y - 2*x)/4;
k = x - h;
if(k < 0 || h<0) cout<<"No\n";
else cout<<"Yes\n";
}
