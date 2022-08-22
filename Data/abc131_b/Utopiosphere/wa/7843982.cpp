#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if (1 - L > N) {
cout << N * (L - 1) + N * (N + 1) / 2 - (L + N - 1) << endl;
}
else if (1 - L <= 0) {
cout << N * (L - 1) + N * (N + 1) / 2 - (L - 1) << endl;
}
else {
cout << N * (L - 1) + N * (N + 1) / 2 << endl;
}
}
