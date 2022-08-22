#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i,a,b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i,n) FOR(i, 0, n)
#define REP1(i,n) FOR(i, 1, n)
using namespace std;
int main() {
int n;
cin >> n;
int digit = 0, num = n;
while (num > 0) {
digit++;
num /= 10;
}
if (digit >= 5)
cout << 9 + 900 + (n - 9999) << endl;
else if (digit >= 3)
cout << 9 + (n - 99) << endl;
else if (digit == 2)
cout << 9 << endl;
else
cout << n << endl;
return 0;
}
