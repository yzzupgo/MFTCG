#include "bits/stdc++.h"
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int ans = 0;
if (A >= 13) ans = B;
else if (A >= 6 && A <= 12) ans = B / 2;
cout << (A>=13 ? B : (A>=6 ? B / 2 : 0)) << endl;
}
