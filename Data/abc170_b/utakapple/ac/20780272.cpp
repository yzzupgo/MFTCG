#include <bits/stdc++.h>
using namespace std;
int main() {
double x, y;
cin >> x >> y;
double a,b;
b = (y-(2.0*x))/2.0;
a = ((4.0*x)-y)/2.0;
if((0 <= a && 0 <= b) &&
(floor(a) == a && floor(b) == b)) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
