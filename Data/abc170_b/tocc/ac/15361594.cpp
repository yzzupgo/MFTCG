#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i <= (int)(n); i++)
int main() {
int x, y;
cin >> x >> y;
rep(i, x) {
int j = x - i;
if ((i * 2) + (j * 4) == y) {
cout << "Yes" << '\n';
return 0;
}
}
cout << "No" << '\n';
}
