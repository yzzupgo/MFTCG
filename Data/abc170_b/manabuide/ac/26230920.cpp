#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int crain = 0; crain < x + 1; crain++) {
int turtle = x - crain;
if (crain * 2 + turtle * 4 == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
