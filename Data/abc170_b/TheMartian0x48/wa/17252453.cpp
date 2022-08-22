#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < (b); ++i)
#define per(i,a,b) for(int i = a; i >= (b); --i)
#define trav(a,x) for(auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll k, n;
cin >> k >> n;
if ((4 * k - n) % 2 || (4 * k - n) < 0) {
cout << "No";
} else {
cout << "Yes";
}
}
