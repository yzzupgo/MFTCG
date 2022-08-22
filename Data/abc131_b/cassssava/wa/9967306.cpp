#include<bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >>L;
int res = 0;
for (int i = 0; i < N; i++) {
res += L + i;
}
int s = N;
for (int i = 0; i < N; i++) {
if (abs(L + i) < s) {
s = abs(L + i);
}
}
cout << res - s << '\n';
}
