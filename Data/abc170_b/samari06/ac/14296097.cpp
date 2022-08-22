#include <bits/stdc++.h>
#define FOR(i,l,r) for(ll i = l; i < r; i++)
#define rep(i,N) FOR(i, 0, N)
#define MOD 1000000007
#define INF 1000000000
using ll = long long int;
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
int main() {
int X, Y; cin >> X >> Y;
bool ans = true;
if(Y < 2*X || Y > 4*X || Y%2 == 1) ans = false;
cout << (ans?"Yes":"No") << endl;
return 0;
}
