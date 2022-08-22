#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main()
{
ll X, Y; cin >> X >> Y;
ll max = X * 4;
ll min = X * 2;
if (Y > max || Y < min) {
cout << "No" << endl;
exit(0);
}
if (Y % 2 && Y % X) {
cout << "No" << endl;
exit(0);
}
cout << "Yes" << endl;
}
