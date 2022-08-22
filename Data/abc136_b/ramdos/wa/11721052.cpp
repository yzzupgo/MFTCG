#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define max3(x,y,z) max(x, max(y, z))
#ifdef _MSC_FULL_VER
#define dout cout
#define debug() if (true)
#define check(x) std::cout << "★" << #x << "の値:" << (x) << endl
#define pass(x) std::cout << "☆" << x << endl
#else
#define dout \
if (false) cout
#define debug() if (false)
#define check(x) \
if (false) cout << "★" << #x << "の値:" << (x) << endl
#define pass(x) \
if (false) cout << "☆" << x << endl
#endif
using namespace std;
int main() {
int a;
if (a < 10) {
cout << a;
} else if (a < 100) {
cout << 9;
} else if (a < 1000) {
cout << a-90;
} else if (a < 10000) {
cout << 909;
} else {
cout << a-9999+909;
}
}
