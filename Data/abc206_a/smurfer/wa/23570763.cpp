#include <bits/stdc++.h>
#define f first
#define s second
#define all(vec) begin(vec), end(vec)
#define pf push_front
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mk make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, int> pdi;
void solve() {
double n;
cin >> n;
if((int)(n * 1.08) < 206) {
cout << "Yay!" << '\n';
} else if((int)(n * 1.08) == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int tc = 1;
cin >> tc;
while(tc--) {
solve();
}
}
