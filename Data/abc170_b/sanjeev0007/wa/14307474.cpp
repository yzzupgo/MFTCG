#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
while (t--)
{
int a, b;
cin >> a >> b;
int div = b / a;
int rem = b % a;
if (b % 2 == 0)
{
if (div >= 2 && div <= 4)
cout << "Yes"
<< "\n";
else
{
cout << "No"
<< "\n";
}
}
}
}
