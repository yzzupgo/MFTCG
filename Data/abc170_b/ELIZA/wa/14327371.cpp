#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int i, j;
if(y == 2 * i + 4 * j && i + j == x) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
