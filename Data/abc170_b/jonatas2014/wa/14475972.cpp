#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long test_cases;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
test_cases = 1;
int c = 0, t;
while (test_cases > 0)
{
int x, y;
cin >> x >> y;
t = x;
for (int i = 0; i <= x; i++)
{
if (y == 2*c + 4*t)
{
cout << "yes\n";
return 0;
}
c++;
t--;
}
cout << "No\n";
test_cases--;
}
return 0;
}
