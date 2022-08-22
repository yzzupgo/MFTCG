#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>
#define roop(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using ull = unsigned long long;
constexpr ull mod = 1e9+7;
constexpr int N = 13;
ull dp[100010][N];
int myPower(int a, int n) {
int x = 1;
while (n > 0) {
if ( n & 1) {
x *= a;
}
a *= a;
n >>= 1;
}
return x;
}
int main() {
int n;
cin >> n;
int ans[3];
ans[0] = 9;
ans[1] = 900;
ans[2] = 90000;
int count = 0;
if (n < 10) {
cout << n << endl;
} else if (n < 100) {
cout << ans[0] << endl;
} else if (n < 1000) {
cout << (ans[0] + (n + 1) - 100) << endl;
} else if (n < 10000) {
cout << (ans[0] + ans[1]) << endl;
} else if (n < 100000) {
cout << (ans[0] + ans[1] + (n + 1) - 10000) << endl;
} else if (n < 1000000) {
cout << (ans[0] + ans[1] + ans[2]) << endl;
}
return 0;
}
