#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int x, y;
cin >> x >> y;
rep(i, x) {
int cranes = i + 1;
if (y - (cranes * 2) == (x-cranes) * 4) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
