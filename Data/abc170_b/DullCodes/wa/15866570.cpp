#include <bits/stdc++.h>
#define fastIO (cin.tie(0), cout.tie(0), ios::sync_with_stdio(false))
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define precise(i) fixed << setprecision(i)
using ll = unsigned long long int;
using namespace std;
int main() {
fastIO;
int x, y;
cin >> x >> y;
int turtle = (y - 2 * x) / 2;
int crane = (4 * x - y) / 2;
if (0 <= turtle && turtle <= 50 && 0 <= crane && crane <= 25)
cout << "Yes";
else
cout << "No";
}
