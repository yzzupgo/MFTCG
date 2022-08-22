#include<bits/stdc++.h>
using namespace std;
#define ff first
#define all(x) x.begin(), x.end()
#define ss second
#define sq(a) (a*a)
#define lc(x) (x<<1)
#define rc(x) (x<<1)|1
#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repr(i,a,b,c) for(int i=a;i>=b;i-=c)
#define int long long
#define ld long double
#define ip(x) int x;cin>>x
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define ub upper_bound
#define lb lower_bound
#define pi pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define N 1000005
#define mod 1000000007
#define value_at_index(p,i) *p.find_by_order(i)
#define index_at_value(p,x) p.order_of_key(x)
#define inf (int)9e18
#define mod1 998244353
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define range(a,b) substr(a,b-a+1)
#define w(x) int x; cin>>x; while(x--)
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int32_t main() {
FIO;
ld n;
cin >> n;
int k = n * 1.08;
if(k == 206) {
cout << "so-so\n";
} else if(k > 206) {
cout << "Yay!\n";
} else {
cout << ":(\n";
}
return 0;
}
