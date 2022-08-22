#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int a, b;
cin >> a >> b;
if (a > 12)
{
cout << b;
}
else if (a < 13 && a > 5)
{
cout << b/2;
}
else if (a < 6)
{
cout << 0;
}
return 0;
}
