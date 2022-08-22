#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = int64_t;
int main()
{
int x, y;
cin >> x >> y;
bool is_ok = false;
for (int i = 0; i <= x; ++i)
{
if (i * 2 + (x - i) * 4 == y)
is_ok = true;
}
if (is_ok)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
