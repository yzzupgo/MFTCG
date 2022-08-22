#include <bits/stdc++.h>
const int INF=1e9;
const int MOD=1e9+7;
const long long LINF=1e18;
using namespace std;
#define int long long
#define fin {cout<<"No"<<endl;return 0;}
signed main(){
int N;cin>>N;
int ans=0;
for(int i=1;i<=N;i++){
if(i>=1e4&&i<1e5)ans++;
else if(i>=1e2&&i<1e3)ans++;
else if(i<10)ans++;
}
cout<<ans<<endl;
}
