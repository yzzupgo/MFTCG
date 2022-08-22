#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define popb pop_back()
#define popf pop_front()
#define ff first
#define ss second
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define vll vector< pair<ll,ll> >
#define vii vector< pair<int,int> >
#define viii vector< tuple <int,int,int> >
#define vlll vector< tuple <ll,ll,ll> >
#define vvl vector<vector<ll>>
#define vv vector<vector<int>>
#define all(v) v.begin(),v.end()
#define sqrt sqrtl
#define cbrt cbrtl
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mapcl map<char,ll>
#define mapci map<char,int>
#define mapll map<ll,ll>
#define mapii map<int,int>
#define seti set<int>
ifstream fin("input.txt");
ofstream fout("output.txt");
int gcd(int a,int b){while (a&&b)a>b?a%=b:b%=a;return a+b;}
ll pows(int a , int b){ll res=1;for(int i=0; i<b; ++i){res*=a;}return res;}
ll logx(ll base, ll num){int cnt=0;while(num!=1){num/=base; ++cnt;}return cnt;}
vi vis(100001,0);
vi adj[100001];
int cnt_dig(int x)
{
int cntx = 0;
while(x)
{
x/=10;
++cntx;
}
if(cntx%2)
return 1;
else
return 0;
}
int main()
{
std::ios::sync_with_stdio(false);
int n,sum=0;
cin>>n;
for(int i=1; i<=n; ++i)
{
sum+=cnt_dig(i);
}
cout<<sum<<"\n";
}
