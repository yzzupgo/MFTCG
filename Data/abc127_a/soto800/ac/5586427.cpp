#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define REP(i,s,l) for(lli i=s;i<l;i++)
#define DEBUG
#define INF (1LL<<50)
#define MOD 1000000007
signed main(){
lli a,b;
cin>>a>>b;
if(a>=13){
cout<<b<<endl;
}
else if(a<=5){
cout<<0<<endl;
}
else
{cout<<b/2<<endl;}
return 0;
}
