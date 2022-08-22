#include <bits/stdc++.h>
using namespace std;
#define pys cout << "YES" << endl
#define pyn cout << "NO" << endl
#define loop(i,n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define nl cout << endl
typedef vector<int> vi;
typedef long long ll;
void solve() {
int n;
cin >> n;
float w = (float)n * 1.08;
int ans = (int) w;
if(ans == 206) {
cout << "so-so";
} else if(ans > 206) {
cout << ":(";
} else if(ans < 206) {
cout << "Yay";
}
}
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int t = 1;
while(t--) {
solve();
}
return 0;
}
