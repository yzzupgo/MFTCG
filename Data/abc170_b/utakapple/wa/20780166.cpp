#include <bits/stdc++.h>
using namespace std;
int main() {
double x, y;
cin >> x >> y;
double a,b;
b = (y-(2*x))/2;
a = ((4*x)-y)/2;
if(0 <= a || 0 <= b) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
