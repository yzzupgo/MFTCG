#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(i,a,b) for(ll i=a-1;i>=b;i--)
#define endl '\n'
#define spc " "
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.14159265358979323
#define sz(a) (int)((a).size())
#define FOR(i,j,k,l) for(ll i=j;i<k;i+=l)
void Fast_IO() {
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
}
int main(){
ll x,y;
cin>>x>>y;
ll yes=0;
f(i,0,x){
if(2*i +4*(x-i)==y) yes=1;
}
if(yes==1) cout<<"Yes";
else cout<<"No";
}
