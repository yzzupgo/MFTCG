#include <bits/stdc++.h>
using namespace std;
#define MOD (1000000000+7)
const int N=200000;
const long long int INF=1000000000000000000;
#define fast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ff first
#define ss second
#define pb push_back
#define pf(a) push_front((a))
#define pof() pop_front()
#define nl '\n'
#define all(v) v.begin(),v.end()
#define fof(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define maxv(a) *max_element(all(a))
#define minv(a) *min_element(all(a))
#define sumv(A,a) accumulate(all(A),a)
#define rev(a) reverse(all(a))
#define as(all,A) sort((A).begin(),(A).end())
#define ds(all,A,x) sort((A).begin(),(A).end(),greater<x>())
#define nxtp(a,b) next_permutation(a,b);
#define input(A,n) fof(i,0,n){cin>>A[i];}
#define mp(x,y) make_pair(x,y)
#define dispve(A,a,n) fof(i,a,n){cout<<A[i]<<" ";}
typedef long long int ll;
#define int ll
int n,m,k;
int inverse(int var);
void solve()
{
int x, y;
cin>>x>>y;
int a = y-2*x;
if(a%2 !=0){
cout<<"No";
return;
}
a/=2;
int b = x-a;
if(a>=0 && b>=0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
clock_t startTime;
double getCurrentTime() {
return (double)(clock() - startTime) / CLOCKS_PER_SEC;
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
int inverse(int var){
int x = MOD-2;
int ans = 1;
while(x>0){
if(x&1){
ans = (ans*var)%MOD;
}
x>>=1;
var = (var*var)%MOD;
}
return ans;
}
