#include <bits/stdc++.h>
#define int long long
#define double long double
#define pb push_back
#define pf push_front
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define piii pair<int,pair<int,int> >
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define x first
#define y second
#define sz(x) (int)x.size()
#define endl '\n'
#define hell 998244353
#define PI 3.141592653589
#define bs(v,n) binary_search(all((v)),(n))
#define lb(v,n) lower_bound(all((v)),(n))
#define ub(v,n) upper_bound(all((v)),(n))
#define fo(i,l,u) for(i=l;i<u;i++)
#define rfo(i,l,u) for(i=l;i>=u;i--)
#define allfo(s) for(auto it=(s).begin();it!=(s).end();it++)
#define _init(b) memset(b,-1,sizeof(b))
#define _init0(b) memset(b,0,sizeof(b))
#define MOD 1000000007
#define ef else if
using namespace std;
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a); }
bool mod(double a,double b) {return a/b - floor(a/b);}
int occurs(vi v,int n){
auto it=lb(v,n);auto it1=ub(v,n);int x=it1-it;return x;}
int logb(int base, int x) {
return (log(x) / log(base));
}
signed main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int i,j,x,a,b,c;
cin>>a;
b=0;
fo(i,1,a+1){
if(i<10||(i>99&&i<1000)||(i>9999&&i<100000))b++;
}
cout<<b;
return 0;
}
