#include <bits/stdc++.h>
using namespace std;
int main() {
int N, ans=0;
cin >> N;
if (N == 100000) ans = 90909;
else if (N <= 99999) ans = N - 9090;
else if (N <= 9999) ans = 909;
else if (N <= 999) ans = N - 90;
else if (N <= 99) ans = N - 9;
cout << ans << endl;
}
