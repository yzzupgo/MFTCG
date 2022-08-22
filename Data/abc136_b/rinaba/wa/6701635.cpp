#include <iostream>
#include <cmath>
using namespace std;
int main() {
int N, ans;
cin >> N;
if (N == 1e5) {
ans = 90909;
}
else if (N < 100) {
ans = N % 10;
} else if (N < 1e4) {
ans = N - 100 + 10;
} else {
ans = (N - 10000) + 910;
}
cout << ans << endl;
}
