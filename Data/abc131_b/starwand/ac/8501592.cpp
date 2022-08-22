#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int eat = numeric_limits<int>::max();
int total = 0;
for (int i = 0; i < N; i++) {
int taste = L + i;
total += taste;
if (abs(eat) > abs(taste)) {
eat = taste;
}
}
cout << total - eat;
return 0;
}
