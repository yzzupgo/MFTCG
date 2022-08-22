#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
if (2 * X <= Y && Y <= 4 * X && Y % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
