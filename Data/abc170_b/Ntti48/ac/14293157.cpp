#include <bits/stdc++.h>
using namespace std;
#define rep(i,ini,n) for(int i=ini;i<n;i++)
#define _rep(i,ini,n) for(int i=ini;i>=n;i--)
#define ToEnd(a) a.begin(),a.end()
uint64_t MOD=1000000007;
int main(){
int x,y; cin>>x>>y;
string ans="No";
rep(i,0,x+1){
if(2*i+4*(x-i)==y) ans="Yes";
}
cout<<ans<<endl;
}
