#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);
#define mod 1000000007
#define pi 2*acos(0)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
using namespace std;
int main() {
io;
int x, y; cin >> x >> y;
if (y % 2 != 0)cout << "No";
else {
int t = (y / 2) - x;
int c = x - t;
if (c + t == x && 2 * c + 4 * t == y && t && c)cout << "Yes";
else cout << "No";
}
}
