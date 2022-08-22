#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define INF 1e9+7
#define cases int t;cin>>t;while(t--)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define ff first
#define ss second
#define test4(x,y,z,a) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<"		a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"		y is "<<y<<"		z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"		y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll x,y;
cin>>x>>y;
ll b=y-2*x;
if(b%2==0&&b>=0){
b/=2;
if(x-b>=0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
else{
cout<<"No";
}
return 0;
}
