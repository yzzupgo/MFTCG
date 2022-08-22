#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define rep2(i, a, n) for(ll i = a; i < (ll)(n); i++)
#define memi cout << endl
#define kono(n) cout << fixed << setprecision(n)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define hina cout << ' '
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define in3(n, m, l) cin >> n >> m >> l
#define out(n) cout << n
const ll mei = (ll)1e9 + 7;

int main(){
  ll a, b, c, d, e, h;
  in3(a, b, c);
  in2(d, e);
  out(min({(a + 9) / 10 * 10 + (b + 9) / 10 * 10 + (c + 9) / 10 * 10 + (d + 9) / 10 * 10 + e,
           (a + 9) / 10 * 10 + (b + 9) / 10 * 10 + (c + 9) / 10 * 10 + (e + 9) / 10 * 10 + d,
           (a + 9) / 10 * 10 + (b + 9) / 10 * 10 + (e + 9) / 10 * 10 + (d + 9) / 10 * 10 + c,
           (a + 9) / 10 * 10 + (e + 9) / 10 * 10 + (c + 9) / 10 * 10 + (d + 9) / 10 * 10 + b,
           (e + 9) / 10 * 10 + (b + 9) / 10 * 10 + (c + 9) / 10 * 10 + (d + 9) / 10 * 10 + a}));
  memi;
}