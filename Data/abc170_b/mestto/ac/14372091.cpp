#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
#define forn(i,a,n) for (int i = (a); i < (int)n; i++)
#define trav(x,arr) for (auto &x : arr)
#define sz(x) (int)x.size()
#define Matrix(m,h,w) = std::vector<vector<int>> m(h, vector<int> (w));
using ll = long long;
#define vi vector<int>
#define vl vector<long>
#define vll vector<ll>
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
int main()
{
ios_base ::sync_with_stdio(0);
cin.tie(0);
int a, b; cin >> a >> b;
if (b % 2 != 0) {
cout << "No";
return 0;
}
int x2 = b, x4 = b;
while (a >= 0) {
if ((x2 % 2 == 0 && x2 / 2 == a * 2) || (x2 % 4 == 0 && x2 / 4 == a * 4)) {
cout << "Yes";
return 0;
} else if ((x4 % 2 == 0 && x4 / 2 == a * 2) || (x4 % 4 == 0 && x4 / 4 == a * 4)) {
cout << "Yes";
return 0;
}
x2 -= 2;
x4 -= 4;
a--;
}
cout << "No";
return 0;
}
