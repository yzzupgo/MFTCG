#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vi>
#define vp vector<pii>
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define rep(i,l,r) for(int i=(l);i<(r);++i)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b)) / gcd((a),(b))
#define pi 3.14159265358979323846264338327950L
#define MOD 1000000007
int32_t main(){
int x,y;
cin>>x>>y;
if(y%2==0&&(x*2)<=y&&(x*4)>=y)
cout<<"YES";
else
cout<<"NO";
return 0;
}
