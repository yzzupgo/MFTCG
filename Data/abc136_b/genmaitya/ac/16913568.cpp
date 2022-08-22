#include <bits/stdc++.h>
using namespace std;
int main() {
int N, ans=0;
cin >> N;
if (N == 100000) ans = 90909;
if (N <= 99999) ans = N - 9090;
if (N <= 9999) ans = 909;
if (N <= 999) ans = N - 90;
if (N <= 99) ans = 9;
if (N <= 9) ans = N;
cout << ans << endl;
}
