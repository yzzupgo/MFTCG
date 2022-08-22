#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if ((L < 0) && (N + L - 1 < 0))
cout << ((N - 1) * (N + 2 * L - 2) / 2) << endl;
else if ((L < 0) && (N + L - 1 > 0))
cout << (N * (N + 2 * L - 1) / 2) << endl;
else
cout << ((N - 1) * (N + 2 * L) / 2) << endl;
}
