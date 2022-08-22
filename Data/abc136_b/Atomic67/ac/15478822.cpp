#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
int main() {
int n;
cin >> n;
int ans = 0;
if(1 <= n && n < 10) ans = n;
else if(10 <= n && n < 100) ans = 9;
else if(100 <= n && n < 1000) ans = (n - 100) + 1 + 9;
else if(1000 <= n && n < 10000) ans = 909;
else if(10000 <= n && n < 100000) ans = (n - 10000) + 1 + 909;
else if(n == 100000) ans = 90909;
cout << ans << endl;
}
