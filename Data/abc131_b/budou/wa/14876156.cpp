#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int abstaste = max(L, -L);
int taste = L;
for (int i = 1; i < N+1; i++) {
int abstastei = max (L - i + 1, -(L - i + 1));
if (abstastei > abstaste) {
break;
}
abstaste = abstastei;
taste = L - i + 1;
}
int sumtaste = N*L - N + N * (N + 1) / 2;
cout << sumtaste - taste << endl;
}
