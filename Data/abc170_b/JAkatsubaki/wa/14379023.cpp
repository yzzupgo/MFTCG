#include "bits/stdc++.h"
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i=1 ;i<=x; i++) {
for (int j=1 ;j<=x; j++){
if ((2*i + 4*j) == y) {
cout << "Yes" << endl;
return 0;
}
}
}
if (2*x == y || 4*y == y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
