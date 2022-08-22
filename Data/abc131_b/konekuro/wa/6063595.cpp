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
if ( count > 0 && X[count] - 0 > 0 - X[count - 1]) {
ans = accumulate(X.begin(), X.end(), 0) - X[count - 1];
}
else {
ans = accumulate(X.begin(), X.end(), 0) - X[count];
}
cout << ans << endl;
return 0;
}
