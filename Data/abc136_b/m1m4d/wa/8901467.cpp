#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int n;
cin >> n;
if (1 <= n && n <= 9) cout << n;
if (10 <= n && n <= 99) cout << 9;
if (100 <= n && n <= 999) cout << 9 + (n - 99);
if (1000 <= n && n <= 9999) cout << 9 + 900;
if (10000 <= n && n <= 99999) cout << 9 + 899 + (n - 9999);
if (n == 100000) cout << 90909;
return 0;
}
