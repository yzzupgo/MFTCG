#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vin(v,n) for (int i = 0; i < (int)(n); i++) cin >> (v)[i];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x, y;
cin >> x >> y;
if (y % 2 == 1) cout << "No" << endl;
else {
if ((y - 2 * x) % 2 == 0 ) {
ll b = (y - 2 * x)/2;
if (b < 0) {cout << "No" << endl;}
else {
if ((y + 2 * x) % 2 == 0) {
ll a = (y + 2 * x) / 2;
if (a < 0) { cout << "No" << endl;}
else {cout << "Yes" << endl;}
}
else cout<< "No" << endl;
}
}
else cout << "No" << endl;
}
}
