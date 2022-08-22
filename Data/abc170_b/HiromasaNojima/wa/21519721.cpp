#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i <= (int)(n); i++)
int main() {
int x, y;
cin >> x >> y;
rep(i, x) {
rep(j, x) {
if (i * 2 + 4 * j == y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
