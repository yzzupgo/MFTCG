#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
int main() {
int x, y;
cin >> x >> y;
bool finish = false;
for (int i = 0; i <= x; i++) {
if (2*i + 4*(x-i) == y) {
finish = true;
break;
}
}
if (finish) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}
