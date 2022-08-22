#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define all(x) (x).begin(),(x).end()
#define ub upper_bound
#define lb lower_bound
#define ins insert
#define int long long
#define endl '\n'
#define ff first
#define ss second
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define si set<int>
#define usi unordered_set<int>
#define mii map<int,int>
#define umii unordered_map<int ,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define rep(i,a,n) for(int i=a;i<n;++i)
#define repd(i,a,n) for(int i=a;i>n;--i)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define Mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
#define deb(x) cout<<#x <<"="<<x<<endl;
#define deb2(x,y) cout<<#x<<"="<<x<<"  "<<#y<<"="<<y<<endl;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int Pow(int a,int b){int res=1;while(b>0){if(b&1)res*=a;a*=a;b/=2;}return res;}
int MPow(int a,int b){int res=1;while(b>0){if(b&1)res=(res*a)%Mod;a=(a*a)%Mod;b/=2;}return res%Mod;}
int log(int x){return 64-__builtin_clzll(x)-1;}
void c_p_p()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
}
struct Node
{
int a,b,c,d;
};
bool cmp(Node A,Node B)
{
return A.a<B.a;
}
const int Max=1e5+1;
int32_t main()
{
c_p_p();
int x,y;
cin>>x>>y;
if(2*x>y || 4*x<y)cout<<"No";
else
{
if(y&1)
cout<<"No";
else cout<<"Yes";
}
return 0;
}
