#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int wa = A+B;
int sa = A=B;
int seki = A*B;
cout << max(wa, max(sa, seki));
}
