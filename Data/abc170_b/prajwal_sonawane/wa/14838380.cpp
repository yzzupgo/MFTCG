#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define digits(x) floor(log10(x) + 1)
#define countbits(x) ((int)log2(x)+1)
#define forn(i,n) for (int i = 0; i < (int)(n); i++)
#define init(arr,value) memset(arr,value,sizeof(arr))
#define deb(x) cout << #x << "=" << x << endl;
#define test unsigned int tet;cin >> tet;while(tet--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(10);cout << fixed;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 9;
const ll N = 500500;
signed main(void)
{
fastio
int x,y;
cin >> x >> y;
for(int a=0; a<=50000; a++){
if(4*x-2*a == y){
cout << "YES\n";
return 0;
}
}
cout << "NO\n";
return 0;
}
