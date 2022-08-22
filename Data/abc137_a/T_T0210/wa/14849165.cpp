#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int X = A + B;
int Y = A - B;
int Z = A * B;
int ans = max(X, Y);
int C = max(ans, Z);
cout << ans << endl;
}
