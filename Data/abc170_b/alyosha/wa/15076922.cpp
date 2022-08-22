#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, y; cin >> n >> y;
int x = (4*n - y);
bool valid = (x >= 0) and ((x&1) == 0);
x = x/2;
int s = n - x;
valid = valid and (y == (2*x+4*s));
cout << (valid ? "Yes" : "No");
return 0;
}
