#include <bits/stdc++.h>
using namespace std;
#define task ""
#define maxn
#define maxm
#define maxs
#define bug(a) cerr << int (a) << "\n"
#define ms(a,b) memset (a, b, sizeof (a))
#define p_b push_back
#define x first
#define y second
#define oo 2000000000
#define mod 1000000007
#define ll long long
typedef pair <int, int> II;
typedef pair <II, int> III;
void solve() {
int n;
cin >> n;
n = n * 1.08;
if(n == 206) {
cout << "so-so";
} else if(n < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen(".inp", "r", stdin);
freopen(".out", "w", stdout);
#endif
ios::sync_with_stdio(false);
solve();
}
