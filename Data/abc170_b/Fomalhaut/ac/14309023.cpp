#include <bits/stdc++.h>
#include <vector>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int x, y;
cin >> x >> y;
if (2 * x <= y&&y<= 4 * x && y % 2 == 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
