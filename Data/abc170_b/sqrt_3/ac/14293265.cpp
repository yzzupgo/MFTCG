#include <bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define F first
#define S second
using namespace std;
typedef pair<int,int> P;
const int MOD=1000000007;
int INF=100100100100100;
signed main(){
int x,y;cin>>x>>y;
string ans="No";
if(x*2<=y && y<=4*x && y%2==0)ans="Yes";
cout<<ans<<endl;
return 0;
}
