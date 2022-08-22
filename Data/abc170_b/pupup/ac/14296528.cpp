#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(i = 0; i < n; i++)
#define Graph vector<vector<int>>
#define A1 cout<<"No"<<endl
#define A2 cout<<"Yes"<<endl
#define A3 cout<<ans<<endl
#define AA(i) cout<<i<<endl;
const int U=2e5+5;
const ll MOD=1000000007;
const int INF = 1001001001;
int main(){
int X,Y; cin >>X>>Y;
if(Y%2 == 1) {AA("No");}
else if(X*2<=Y && X*4>=Y) {AA("Yes");}
else AA("No");
return 0;
}
