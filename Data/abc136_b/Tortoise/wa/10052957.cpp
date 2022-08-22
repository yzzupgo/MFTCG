#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
using namespace std;
int main(){
int n,x=0,y=0,ans=100000,c=0;
cin>>n;
if(n<10) c+=n;
if(10<=n && n<1e3) c+=n-1e2+10;
if(1e3<=n && n<=1e5) c+=n-1e4+9e2+9;
co(c);
return 0;
}
