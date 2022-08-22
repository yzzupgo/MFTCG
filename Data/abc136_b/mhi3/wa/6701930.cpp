#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll md = 1000000007;
int main(int, char**)
{
ll n, ans = 0;
cin >> n;
if (n < 10) {
ans = n;
} else if (n < 100) {
ans = 9;
} else {
if (n < 1000)
ans = n - 100 + 10;
else if (n < 10000)
ans = 909;
else
ans = n - 10000 + 909;
}
cout << ans << endl;
return 0;
}
