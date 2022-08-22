#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int x, y;
cin >> x >> y;
int feet = x*2;
if (feet > y || (y&1)) {cout << "NO"; return 0;}
y -= feet;
y /= 2;
if (x < y) cout << "NO";
else cout << "YES";
}
