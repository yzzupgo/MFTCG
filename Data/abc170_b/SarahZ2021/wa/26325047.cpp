#include<iostream>
using namespace std;
#define int long long
#define loop(x,n) for(int i = x; i < n; i++)
signed main()
{
int a, b;
cin >> a >> b;
if (4 * a < b || b < 2 * a)
cout << "No";
else cout << "Yes";
return 0;
}
