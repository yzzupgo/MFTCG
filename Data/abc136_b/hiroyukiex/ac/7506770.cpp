#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if (n <= 9){ cout << n;}
if (10 <= n && n <= 99) {cout << 9;}
if (100 <= n && n <= 999){ cout << n-90;}
if (1000 <= n && n <= 9999){ cout << 909;}
if (10000 <= n && n <= 99999){ cout << n-9090;}
if (n == 100000){ cout << 90909;}
}
