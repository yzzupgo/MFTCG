#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define cases int t;cin>>t;while(t--)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define per(i,a,b) for(ll i=a;i>b;i--)
#define test4(x,y,z,a) cout<<"x is "<<x<<"y is "<<y<<"z is "<<z<<"a is "<<a<<endl;
#define test3(x,y,z) cout<<"x is "<<x<<"y is "<<y<<"z is "<<z<<endl;
#define test2(x,y) cout<<"x is "<<x<<"y is "<<y<<endl;
#define test1(x) cout<<"x is "<<x<<endl;
ll mod = 1000000007;
int main()
{
#ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("outputf.in", "w", stdout);
#endif
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int x,y,a,b;
cin>>x>>y;
if(y%2!=0)
{
cout<<"NO";
}
else
{
a=4*x;
b=2*x;
if(y>=b && a>=y)
{
cout<<"YES";
}
else
{
cout<<"NO";
}
}
return 0;
}
