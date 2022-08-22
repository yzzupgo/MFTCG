#include <iostream>
#define rep(I,L) for (int I = 0; I < L; ++I)
using namespace std;
int main() {
int n;
cin >> n;
int ans;
if (n < 10) {
ans = n;
} else if (n < 100) {
ans = 9;
} else if (n < 1000) {
ans = n - 99 + 9;
} else if (n < 10000) {
ans = (1000 - 100) + 9;
} else if (n < 100000) {
ans = n - 9999 + (999 - 99) + 9;
} else {
ans = (100000 - 10000) + (1000 - 100) + 9;
}
cout << ans << endl;
return 0;
}
