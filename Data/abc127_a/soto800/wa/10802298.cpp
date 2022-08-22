#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define RREP(i,s,n) for(lli i=s;i>=n;i--)
#define MOD 1000000007
#define NUM 2520
#define DEBUG 1
#define mp(a,b) make_pair(a,b)
#define SORT(V) sort(V.begin(),V.end())
#define PI (3.141592653589794)
#define INF (1LL<<50)
signed main(){
lli a,b;
cin>>a>>b;
if(a>=13)cout<<b<<endl;
else if(a>=5)cout<<b/2<<endl;
else cout<<0<<endl;
return 0;
}
