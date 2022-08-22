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
for (int turtle = 0; turtle <= 100; turtle++) {
for (int crane = 0; crane <= 100; crane++) {
if ((turtle + crane == x) && (turtle * 4 + crane * 2 == y)) {
cout << "Yes";
return 0;
}
}
}
cout << "No";
return 0;
}
