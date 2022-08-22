#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define pc(x) __builtin_popcount (x)
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define ld long double
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod 1000000007
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define gcd __gcd
#define primeDEN 727999983
#define nx_pe next_permutation(s.begin(),s.end())
#define cl cout<<"\n"
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin) ;
freopen("output.txt", "w", stdout) ;
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL) ; cout.tie(NULL) ;
std::ios::sync_with_stdio(false);
ll x,y;
cin>>x>>y;
if(y%2){
cout<<"No\n";
return 0;
}
ll z=y/2;
ll t=z-x;
if(z<0){
cout<<"No\n";
return 0;
}
ll c=x-t;
if(c<0)
{
cout<<"No\n";
return 0;
}
cout<<"Yes\n";
}
