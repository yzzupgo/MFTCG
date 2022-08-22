#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <math.h>
#include <map>
using namespace std;
#define INF 1e9
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
int gcd(int a, int b) {
if(a % b == 0) {
return b;
}
else {
return(gcd(b, a % b));
}
}
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
if (i * 2 + (x - i) * 4 == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
