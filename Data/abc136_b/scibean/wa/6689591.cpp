#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define vi vector<int>
#define vl vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
int main(){
int n;
int ans=0;
cin>>n;
rep(i,n){
if(i>=10 && i<=99)continue;
if(i>=1000 && i<=9999)continue;
if(i>=100000 && i<=999999)continue;
if(i>=10000000 && i<=99999999)continue;
ans++;
}
cout<<ans-1<<endl;
}
