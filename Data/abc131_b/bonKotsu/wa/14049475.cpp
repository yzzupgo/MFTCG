#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int apple = 0;
int sum = 0;
int taste = 1000;
for (int i = 0; i < N; i++) {
sum += abs(L+i-1);
if (abs(L+i-1) < taste) {
apple = i;
taste = abs(L+i-1);
}
}
cout << sum - (L+apple-1) << endl;
}
