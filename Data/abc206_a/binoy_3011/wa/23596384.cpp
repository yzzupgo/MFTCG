#include <bits/stdc++.h>
#define ll long long int
#define pb(n) push_back(n);
#define loop(i,a,b) for(int i = a;i<=b;i++)
#define looprev(i,a,b) for(int i = a;i>=b;i--)
#define nl cout << endl;
#define mod 1000000007
using namespace std;
void solve() {
int n;
cin >> n;
int ans = n * 1.08;
if(ans == 206) {
cout << "so-so";
} else if(ans > 206) {
cout << ":(";
} else {
cout << "Yay !";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
solve();
#ifndef ONLINE_JUDGE
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
return 0;
}
