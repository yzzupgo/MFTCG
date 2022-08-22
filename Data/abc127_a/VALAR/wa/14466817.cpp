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
else if (5 < a < 13)
{
cout << b/2;
}
else
{
cout << 0;
}
return 0;
}
