#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int ans = 0;
if (l > 0)
{
for (int i = 0; i < n - 1; i++)
{
l++;
ans += l;
}
cout << ans << endl;
}
else if(l * 2 * -1 <= n)
{
for (int i = 0; i < n; i++)
{
ans += l;
l++;
}
cout << ans << endl;
}
else
{
for (int i = 0; i < n - 1; i++)
{
ans += l;
l++;
}
cout << ans << endl;
}
}
