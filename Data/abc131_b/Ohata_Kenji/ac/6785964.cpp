#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 1 << 30;
const ll INFll = 1ll << 60;
int main() {
int n, l;
cin >> n >> l;
if (l >= 0) {
cout << (l + 2 - 1 + l + n - 1) * (n - 1) / 2 << endl;
} else {
cout << (l + 1 - 1 + l + n - 1) * n / 2 - (l + min(n, 1 - l) - 1) << endl;
}
return 0;
}
