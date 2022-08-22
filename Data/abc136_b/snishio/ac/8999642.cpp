#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int N, ans = 0;
cin >> N;
if (N <= 99) ans += min(9,N);
else if (N >=100 && N <= 999) ans += 9+N-99;
else if (N >= 1000 && N <= 9999) ans += 909;
else if (N >= 10000 && N <= 99999) ans += 909+N-9999;
else ans += 90909;
cout << ans << endl;
return 0;
}
