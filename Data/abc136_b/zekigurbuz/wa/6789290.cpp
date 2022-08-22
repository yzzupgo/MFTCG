#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n; cin >> n;
long long tot = 0;
for (int i = 1; i <= n; i *= 100) {
tot += min(n, i * 10) - i + 1;
}
cout << tot << endl;
return 0;
}
