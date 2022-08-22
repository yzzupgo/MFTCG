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
ans = min(N,9);
} else if (N < 1e4) {
ans = min(900, N - 99) + 9;
} else {
ans = min(90000, N - 9999) + 909;
}
cout << ans << endl;
}
