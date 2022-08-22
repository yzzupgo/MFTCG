#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long long unsigned int ull;
typedef pair<ll, ll> llpair;
typedef std::numeric_limits<double> dbl;
#if defined(_USE_MATH_DEFINES) && !defined(_MATH_DEFINES_DEFINED)
#define _MATH_DEFINES_DEFINED
#define M_E 2.71828182845904523536
#define M_LOG2E 1.44269504088896340736
#define M_LOG10E 0.434294481903251827651
#define M_LN2 0.693147180559945309417
#define M_LN10 2.30258509299404568402
#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.785398163397448309616
#define M_1_PI 0.318309886183790671538
#define M_2_PI 0.636619772367581343076
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2 1.41421356237309504880
#define M_SQRT1_2 0.707106781186547524401
#endif
void prepareIO() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.precision(dbl::max_digits10);
}
struct HASH {
size_t operator()(const llpair &x) const {
return hash<long long>()(x.first ^ (x.second) << 32);
}
};
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 5;
int main() {
#ifndef ONLINE_JUDGE
freopen("../input.txt", "r", stdin);
freopen("../output.txt", "w", stdout);
#endif
prepareIO();
ll n;
cin >> n;
ll ans = (108 * n) / 100;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
