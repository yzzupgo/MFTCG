#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if (L > 0) {
cout << (2 *L + N -1) * N / 2 - L << endl;
}
else if (N + L - 1 < 0) {
cout << (2 *L + N -1) * N / 2 - (N + L - 1) << endl;
}
else {
cout << (2 *L + N -1) * N / 2 << endl;
}
}
