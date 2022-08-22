#include <iostream>
using namespace std;
int main()
{
int n, ans = 0;
cin >> n;
for (int i = 0; i <= n; i++)
{
if (i % 2 == 1)
{
ans++;
}
}
cout << ans << endl;
}
