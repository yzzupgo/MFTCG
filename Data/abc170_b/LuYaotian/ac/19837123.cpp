#include <bits/stdc++.h>
using namespace std;
int x , y , c , t;
int main () {
cin >> x >> y;
c = (x * 4 - y) / 2;
t = x - c;
if (c * 2 + t * 4 == y && c >= 0 && t >= 0) {
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
