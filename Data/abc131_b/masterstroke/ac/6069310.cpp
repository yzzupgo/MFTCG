#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define PB push_back
#define MP make_pair
#define endl '\n'
#define pri 1000000007
#define all(x) x.begin(),x.end()
#define mnx 1000001
#define pr pair<ll,ll>
using namespace std;
void masterstroke(){
ll n,l;cin>>n>>l;
ll s=0;
for(ll i=0;i<n;i++)
{s+=(l+i);}
if(l<=0&&(l+n-1)>=0){
}
else if(l>0){
s-=(l);
}
else{
s-=(n+l-1);
}
cout<<s<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;
for(ll i=0;i<t;i++)masterstroke();
}
