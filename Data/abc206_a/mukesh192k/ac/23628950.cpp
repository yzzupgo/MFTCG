#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define ff first
#define ss second
#define ld long double
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {1, -1, 0, 0};
int findPaths(int m, int n, int maxMove, int sr, int sc) {
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int ans = 0;
list<pair<int, int>> L;
for(int i = 0; i < m; i++) {
L.push_back({i, -1});
L.push_back({i, n});
}
for(int i = 0; i < n; i++) {
L.push_back({m, i});
L.push_back({-1, i});
}
while(maxMove--) {
int t = L.size();
while(t--) {
int x = L.front().first;
int y = L.front().second;
for(int k = 0; k < 4; k++) {
int ddx = x + dx[k], ddy = y + dy[k];
if(ddx >= m || ddx < 0 || ddy >= n || ddy < 0) {
continue;
}
if(ddx == sr && ddy == sc) {
ans++;
}
L.push_back({ddx, ddy});
}
}
}
return ans;
}
int main() {
ll a;
cin >> a;
ll x = floor(1.08 * a);
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
