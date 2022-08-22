#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
using namespace std;
int main(){
int n,x=0,y=0,ans=100000,c=0;
cin>>n>>x;
ans=n*(n-1)/2+n*x;
if(x>=0) co(ans-x);
else if(n+1>=abs(x)) co(ans);
else co(ans-x-n+1);
return 0;
}
