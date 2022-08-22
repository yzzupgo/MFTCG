#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A > 5 && A < 13) {
cout << B / 2;
}
else if (A <= 5) {
cout << 0;
}
else {
cout << B;
}
return 0;
}
