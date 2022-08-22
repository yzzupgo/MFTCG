#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<vector<pair<ll,ll> > > vvpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) x.begin() , x.end()
#define pb push_back
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define left (node << 1)
#define right (node << 1) + 1
#define pii pair<int,int>
#define mii map<int,int>
#define vi vector<int>
#define umii unordered_map<int,int>
#define mod 998244353
#define trace1(x) cerr<<#x<<": "<<x<<endl
#define trace2(x,y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x,y,z) cerr<<#x<<": " <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define repo(i,o,e) for(int i = o ; i < e ; i++)
#define rep(n) for(int i = 0 ; i < n ; i++)
const ll sz = 2e5+5;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void solve(){
int a,b;
cin >> a >> b;
if(a > 12){
cout << b << endl;
}
else if(a > 5 && a < 13){
cout << b/2 << endl;
}
else if(a < 6 && a > -1){
cout << 0 << endl;
}
}
int main(){
FIO;
int t = 1;
while(t--){
solve();
}
return 0;
}
