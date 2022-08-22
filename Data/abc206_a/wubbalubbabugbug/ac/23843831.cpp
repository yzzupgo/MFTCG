#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ld = long double;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define JUGAD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define po pop_back
#define pof pop_front
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pll pair<lli,lli>
#define pdd pair<ld,ld>
#define pq priority_queue
#define qq queue
#define ff first
#define ss second
#define decimal fixed<<setprecision(20)
const int N = 1e5 + 1;
const lli MOD = 1e9 + 7;
bool ok(ld a, ld b, ld c, ld d) {
return max(a, c) <= min(b, d);
}
int main() {
FAST;
int a;
cin >> a;
a *= 108;
string ans = ":(";
if(a < 20600) {
ans = "Yay!";
} else if(a < 20700) {
ans = "so-so";
}
cout << ans;
}
