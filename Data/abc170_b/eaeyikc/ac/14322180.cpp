#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y ;
int a,b;
a=2*x-y/2;
b=y/2-x;
if (y%2 != 0) {
cout << "No" << endl;
}
else if ((a>=0)&&(b>=0)) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
