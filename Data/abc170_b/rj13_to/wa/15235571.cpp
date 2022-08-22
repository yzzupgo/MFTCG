#include<bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define ll long long
using namespace std;
ll power(ll a,ll b){
ll k=1;
for(int i=0;i<b;i++)
k*=a;
return k;
}
void solve();
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int q=1;
while(q--){
solve();
}
}
void solve(){
int x,k;
cin>>x>>k;
if(k%2==0 && k>=2*x && k<=x*4)
cout<<"YES";
else
cout<<"NO";
}
