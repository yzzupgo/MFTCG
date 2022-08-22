#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
vector<int> ta(N);
for (int i = 0; i < N; i++) {
ta[i] = L + i;
}
int nearzero = 100;
int sum = 0;
for (int i = 0; i < N; i++) {
nearzero = min(nearzero, abs(ta[i]));
sum += ta[i];
}
cout << sum - nearzero << endl;
}
