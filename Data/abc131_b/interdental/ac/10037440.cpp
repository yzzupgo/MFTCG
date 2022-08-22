#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int S = N * (N + 1) / 2 + (L - 1) * N;
if (L > 0) {
cout << S - L << endl;
}
else if (L + N - 1 < 0) {
cout << S - L - N + 1 << endl;
}
else {
cout << S << endl;
}
}
