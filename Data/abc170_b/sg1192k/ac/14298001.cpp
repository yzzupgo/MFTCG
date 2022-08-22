#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int x,y;cin>>x>>y;
for(int i=0;i<=x;i++){
int j = x-i;
int legs = j*4+(i*2);
if(legs==y) {cout<<"Yes";return;}
}
cout<<"No";
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
