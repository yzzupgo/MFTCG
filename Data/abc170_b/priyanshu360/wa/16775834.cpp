#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define loop(i,n) for(int i=0;i<(int)(n);i++)
#define foi(i,k,n) for(int i=(k); i<(int)(n); i+=1)
#define fod(i,n,k) for(int i=k; i>=(int)n; i-=1)
#define fast_io ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define endl "\n"
#define int long long
#define INF 0x3f3f3f3f
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define fir first
#define sec second
#define pb push_back
#define mp make_pair
typedef long long llint;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<llint> VL;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MII;
typedef set<int> SI;
string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
llint toint(string s) {stringstream ss(s); llint x; ss >> x; return x;}
void solve(){
int x, y;
cin >> x >> y;
loop(i, x + 1){
if((2*i) + (4*(x - i)) == y){
cout << "Yes";
return;
}
}
}
int32_t main() {
fast_io;
int t = 1;
while(t--) {
solve();
}
return 0;
}
