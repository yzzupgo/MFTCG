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
int c = (4*x-y)/2, r = (4*x-y)%2;
if (c > 0 && r == 0) {
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
