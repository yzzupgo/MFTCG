#include<bits/stdc++.h>
using namespace std;
#define fo(i,a,n) for(i=a;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortrev(x) sort(all(x),greater<int>())
#define pi 3.1415926535897932384626
typedef pair<int,int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
const int mod = 1000000007;
const int inf = 100000005;
const int N = 200005, M = N;
int i,j,n,m;
ll cnt , idx;
vi temp;
void solve() {
ll x,y;
cin>>x>>y;
ll k = y - x*2;
ll k1 = -1;
if(k%2==0) k1 = k / 2;
ll k2 = x - k1;
if(k1>=0 && k2>=0) cout<<"Yes\n";
else cout<<"No\n";
}
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t = 1;
while(t--) {
solve();
}
return 0;
}
