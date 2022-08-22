#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define maxn 200005
#define endl '\n'
int dp[maxn];
void solve(){
int x , y;
cin>>x>>y;
if(y < x * 2 || y > x * 4){
cout<<"No"<<endl;
}else cout<<"Yes"<<endl;
}
int32_t main(){
ios::sync_with_stdio(false);
cin.tie(nullptr) , cout.tie(nullptr);
int t = 1;
while(t--)
solve();
return 0;
}
