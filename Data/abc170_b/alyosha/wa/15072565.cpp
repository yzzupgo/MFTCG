#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, y; cin >> n >> y;
int x = (4*n - y);
bool valid = (x >= 0) and ((x&1) == 0);
x = x/2;
y = n - x;
valid = valid and (n == (2*x+4*y));
cout << (valid ? "Yes" : "No");
return 0;
}
