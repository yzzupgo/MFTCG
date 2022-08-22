#include <bits/stdc++.h>
#define cina(a,n) for (int i = 0; i < n; ++i){ cin >> a[i]; }
#define ll long long
#define ld long double
using namespace std;
int main () {
ios::sync_with_stdio(0);
cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; ++i) {
if (2*i+4*(x-i) == y) {
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
