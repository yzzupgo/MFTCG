#include <bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; ++i)
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
int n1 = ((x * 4) - y) / 2;
int n2 = ((n1 * 2) - y) / 4;
if((2 * abs(n1)) + (4 * abs(n2)) == y) {
cout << "Yes";
}
else {
cout << "No";
}
cout << "\n";
return 0;
}
