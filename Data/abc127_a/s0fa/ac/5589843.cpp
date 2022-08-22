#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
if (a>b) {
swap(a,b);
}
if (b%a == 0) {
return a;
}
return gcd(b%a,a);
}
int main() {
int A,B;
cin >> A >> B;
if (A < 6) {
cout << 0 << endl;
return 0;
}
else if (A < 13) {
cout << B / 2 << endl;
return 0;
}
else {
cout << B << endl;
return 0;
}
return 0;
}
