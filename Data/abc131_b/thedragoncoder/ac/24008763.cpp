#include <bits/stdc++.h>
using namespace std;
#define MOD (1000000000+7)
const int N=100001;
const long long int INF=1000001;
#define fast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define sz(v) int(v.size())
#define ff first
#define ss second
#define pb push_back
#define pob() pop_back()
#define pf(a) push_front((a))
#define pof() pop_front()
#define nl '\n'
#define all(v) v.begin(),v.end()
#define maxv(a) *max_element(all(a))
#define minv(a) *min_element(all(a))
#define sumv(A,a) accumulate(all(A),a)
#define fof(i,a,n) for(ll i=a;i<(n);i++)
#define fob(i,n,a) for(ll i=n;i>=a;i--)
#define rev(a) reverse(all(a))
#define as(all,A) sort((A).begin(),(A).end())
#define ds(all,A,x) sort((A).begin(),(A).end(),greater<x>())
#define nxtp(a,b) next_permutation(a,b);
#define input(A,n) fof(i,0,n){cin>>A[i];}
#define mk_pair(x,y,a,b) insert(pair<x,y >(a,b))
#define mp(x,y) make_pair(x,y)
#define de(a) cerr<<a<<" ";
#define dispve(A,a,n) fof(i,a,n){cout<<A[i]<<" ";}
#define dismp(m) for(auto x : m){ cout<<x.ff<<" "<<x.ss<<"\n"; }
typedef long long int ll;
#define int ll
int n,m;
vector<int>a,b,c;
void solve()
{
cin>>n>>m;
a.resize(n);
int sum=0;
for(int i = 0;i<n;i++){
a[i] = m+i;
sum+=a[i];
}
int mn= MOD,pos = -1;
for(int i = 0;i<n;i++){
if(mn>abs(sum-(sum-a[i]))){
pos = i;
mn = abs(sum-(sum-a[i]));
}
}
cout<<sum-a[pos];
}
signed main()
{
fast;
int T=1;
while(T--){
solve();
cout<<nl;
}
return 0;
}
