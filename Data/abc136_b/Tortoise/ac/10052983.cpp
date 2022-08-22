#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
using namespace std;
int main(){
int n,x=0,y=0,ans=100000,c=0;
cin>>n;
rep(i,1,n+1){
if(1<=i && i<=9) c++;
if(100<=i && i<=999) c++;
if(1e4<=i && i<=1e5-1) c++;
}
co(c);
return 0;
}
