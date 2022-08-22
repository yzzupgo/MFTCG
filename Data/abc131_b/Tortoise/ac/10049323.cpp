#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
using namespace std;
int main(){
int n,x=0,y=0,ans=100000,c=0;
cin>>n>>x;
rep(i,0,n){
c+=i+x;
}
rep(i,0,n){
y=i+x;
if(abs(ans)>abs(y)) ans=y;
}
co(c-ans);
return 0;
}
