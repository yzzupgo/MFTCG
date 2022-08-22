#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sz(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()
const int INF = numeric_limits<int>::max();
const int nax = (int)(100001);
const int mod = 1e9 + 7;
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!";
} else {
if(1.08 * n < 206 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
return 0;
}
