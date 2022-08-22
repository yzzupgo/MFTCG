#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define PI 3.141592653589793238
#define endl '\n'
#define mod 1000000007
#define um unordered_map
#define umm unordered_multimap
#define pb push_back
#define fr first
#define sc second
template <class T>
T max3(T a, T b, T c) {
return max(a, max(b, c));
}
void solve() {
int n;
cin >> n;
double ans = 1.08;
if((ans * (double)n) < (double)206) {
cout << "Yay!" << endl;
return;
}
if((ans * (double)n) == (double)206) {
cout << "so-so" << endl;
return;
}
cout << ":(" << endl;
return;
}
signed main() {
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
solve();
return 0;
}
