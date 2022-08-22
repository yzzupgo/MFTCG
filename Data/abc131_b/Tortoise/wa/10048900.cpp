#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
using namespace std;
int main(){
int n,x=0,y=0,ans=100000,c=0;
cin>>n>>x;
c=n*(n-1)/2+n*x;
rep(i,0,n){
ans=min(ans,c-(x+i));
}
co(ans);
return 0;
}
