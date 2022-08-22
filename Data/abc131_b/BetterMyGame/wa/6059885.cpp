#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if (L > 0)
cout << (N - 1) * (L - 1) + (2 + N) * (N - 1) / 2 << endl;
else if (L + N < 0)
cout << (N - 1) * (L - 1) + N * (N - 1) / 2 << endl;
else
cout << N * (L - 1) + (1 + N) * N / 2 << endl;
}
