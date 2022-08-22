#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using ll = long long int;
const int INF = (1 << 30);
const ll INFLL = (1ll << 60);
const ll MOD = (ll)(1e9 + 7);
#define l_ength size
void mul_mod(ll &a, ll b) {
a *= b;
a %= MOD;
}
void add_mod(ll &a, ll b) {
a = (a < MOD) ? a : (a - MOD);
b = (b < MOD) ? b : (b - MOD);
a += b;
a = (a < MOD) ? a : (a - MOD);
}
int main(void) {
int n;
std::cin >> n;
n *= 108;
n /= 100;
if(n > 206) {
std::cout << ":(" << std::endl;
} else if(n < 206) {
std::cout << "Yay" << std::endl;
} else {
std::cout << "so-so" << std::endl;
}
return 0;
}
