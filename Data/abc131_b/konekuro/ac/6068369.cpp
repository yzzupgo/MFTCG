#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <numeric>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
vector<int> X(N);
int count = 0, ans = 0;
for (int i = 0; i < N; i++) {
X[i] = i + L;
if (X[i] < 0) {
count++;
}
}
if (L < 0 && N + L > 0) {
ans = accumulate(X.begin(), X.end(), 0);
}
else if ( L < 0 && L + N <= 0) {
ans = accumulate(X.begin(), X.end(), 0) - X[N - 1];
}
else {
ans = accumulate(X.begin(), X.end(), 0) - X[0];
}
cout << ans << endl;
return 0;
}
