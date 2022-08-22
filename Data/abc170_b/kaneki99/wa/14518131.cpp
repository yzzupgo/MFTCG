#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin >> x >> y;
if(2*x == y || 4*x == y)std::cout << "No" << "\n";
else cout << "Yes" << "\n";
return 0;
}
