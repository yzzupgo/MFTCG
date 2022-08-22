#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a-1;i>=b;i--)
#define pb push_back
#define pob pop_back
#define eb emplace_back
#define ins insert
#define mp make_pair
#define ff first
#define ss second
#define pf push_front
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define sz(a) (ll)a.size()
#define dec(x) fixed<<setprecision(x)
#define lcm(a,b) (a*b/__gcd(a,b))
typedef priority_queue<ll> pq;
typedef priority_queue<ll,vector<ll>,greater<ll> > pqmn;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vector<ll> > vvll;
typedef vector<string> vs;
typedef set<ll> sll;
typedef set<pll> spll;
typedef map<ll,ll> mll;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
const ld pi=acos(-1);
const ll N=100001;
void solution()
{
ll a,b;
cin>>a>>b;
for(ll i=0;i<=a;i++) {
ll tot=i * 2 + (a - i) *4;
if(tot==b) {
cout<<"Yes";
return;
}
}
cout<<"No";
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll t;
t=1;
while(t--){
solution();
cout<<"\n";
}
return 0;
}
