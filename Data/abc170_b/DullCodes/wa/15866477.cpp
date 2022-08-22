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
int turtle = (4 * x - y) / 2;
int crane = (y - 2 * x) / 2;
cout << turtle << ", " << crane << endl;
if (crane >= 0 && turtle >= 0)
cout << "Yes";
else
cout << "No";
}
