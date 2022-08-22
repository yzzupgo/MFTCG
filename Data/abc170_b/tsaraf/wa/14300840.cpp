#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector < ll > vl;
typedef vector < int > vi;
typedef vector < bool > vb;
typedef vector < vl > vvl;
typedef vector < vi > vvi;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < pll > vpll;
typedef vector < pii > vpii;
typedef vector < vpll > vvpll;
typedef vector < vpii > vvpii;
#define pb push_back
#define pf push_front
#define all(c) (c).begin(), (c).end()
#define ff first
#define ss second
#define mp(x,y) make_pair((x), (y))
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
void solve(){
int x, y; cin >> x >> y;
int a = 4 * x - y;
a /= 2;
if(a >= 0 && 2 * a + 4 * (x - a) == y){
cout << "Yes\n";
}
else
cout << "No\n";
}
int main(){
boost;
int t = 1;
while(t--){
solve();
}
return 0;
}
