#include<bits/stdc++.h>
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long int
#define ull unsigned long long int
#define tst int t;cin>>t;while(t--)
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define vs(v) vector<string>v
#define rsrt(v) sort(v.rbegin(),v.rend());
#define all(v) v.begin(),v.end()
#define pf(x) cout<<x<<endl;
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ms(x,n) memset(x,n,sizeof(x));
#define srt(v) sort(v.begin(),v.end());
#define rvs(v) reverse(v.begin(),v.end());
#define Raihan ios::sync_with_stdio(false);cin.tie(0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define str int s[200000];
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define mod 1000000007
using namespace std;
int main() {
Raihan
ll n;
cin >> n;
ll x = n * 1.08;
if(x < 206)
pf("Yay!")
else if(x == 206)
pf("so-so")
else pf(":(")
return 0;
}
