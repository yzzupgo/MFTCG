#include <bits/stdc++.h>
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<string, int> psi;
typedef pair<char, int> pci;
typedef pair<int, char> pic;
const ll MOD = (ll)1e9 + 7;
const long double PI = 3.141592653589793238462643383279502884197;
ll fac[1] = {1}, inv[1] = {1};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll mp(ll a,ll b){ll ret=1;while(b){if(b&1)ret=ret*a%MOD;a=a*a%MOD;b>>=1;}return ret;}
ll cmb(ll r, ll c) {return fac[r] * inv[c] % MOD * inv[r - c] % MOD;}
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> v;
int main() {
int n, m;
scanf("%d %d", &n, &m);
if (m%2==1) printf("No\n");
else if (n*2 <= m && m <= 4*n) return !printf("Yes");
else printf("No\n");
}
