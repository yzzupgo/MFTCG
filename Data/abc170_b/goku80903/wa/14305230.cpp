#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vl vector<ll>
#define vi vector<ll>
#define pi pair<ll,ll>
#define TC int t;cin>>t;while(t--)
#define in(n) ll n;cin>>n;
#define inarr(n) ll n;cin>>n;ll arr[n];
int main(void){
ios_base::sync_with_stdio(false);cin.tie(NULL);
in(x);in(y);
string ans ="No";
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(2*i+4*j==y)
ans="Yes";
}
}
cout<<ans<<endl;
return 0;
}
