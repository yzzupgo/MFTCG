#include <bits/stdc++.h>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define PI 3.14159265359
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b << endl;
} else if (a >= 6 && a <= 12) {
cout << b / 2 << endl;
} else {
cout << 0 << endl;
}
return 0;
}
