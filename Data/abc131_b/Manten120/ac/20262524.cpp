#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L; cin >> N >> L;
vector<int> aji(N);
for (int i = 0; i < N; i++) {
aji.at(i) = L + i;
}
int min_abs = 1000;
int min_index;
for (int i = 0; i < N; i++) {
if (abs(aji.at(i)) < min_abs) {
min_abs = abs(aji.at(i));
min_index = i;
}
}
int ans = 0;
for (int i = 0; i < N; i++) {
if (i == min_index) continue;
ans += aji.at(i);
}
cout << ans;
}
