#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef vector <ll> vll;
#define pb push_back
#define endl "\n";
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1e9 + 7;
void solve() {
int n;
cin >> n;
float ans = floor(1.08 * n);
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
clock_t clk = clock();
sync;
int t = 1;
while(t--) {
solve();
cout << endl;
}
cerr << '\n' << "Time (in s): " << double(clock() - clk) * 1.0 / CLOCKS_PER_SEC << '\n';
return 0;
}
