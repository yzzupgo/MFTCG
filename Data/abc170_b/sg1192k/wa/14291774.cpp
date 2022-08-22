#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int x,y;cin>>x>>y;
int maxx= x*4;
int minn=x*2;
if(y%2==0&&y>=minn&&y<=maxx) cout<<"YES";
else cout<<"NO";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int T=1;
while(T--){
solve();
}
return 0;
}
