#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main()
{
ll X, Y; cin >> X >> Y;
ll a = 0;
ll b = 0;
for (int i = 0; i <= X; ++i) {
a = i;
b = X-i;
ll leg = a * 2 + b * 4;
if (leg == Y) {
cout << "Yes" << endl;
exit(0);
}
}
cout << "No" << endl;
}
