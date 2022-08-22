#include <bits/stdc++.h>
using namespace std;
#define iterall(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector <int> vi;
typedef vector <bool> vb;
typedef vector <double> vd;
typedef vector <ll> vll;
typedef vector <vector <int>> vvi;
typedef vector <vector <long long>> vvll;
typedef vector <vd> vvd;
typedef vector <long long> vll;
typedef pair <int, int> pii;
typedef pair<ll , ll> pll;
typedef vector <pair <int, int>> vpii;
typedef vector <pll> vpll;
const int INF = 1e9+5;
const double EPS = 1e-9;
int main()
{
int x, y;
cin >> x >> y;
cout << ((y-2*x)/2 >= 0 && (4*x - y)/2 >= 0 ? "Yes": "No") << endl;
}
