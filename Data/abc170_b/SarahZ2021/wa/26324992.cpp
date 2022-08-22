#include<iostream>
using namespace std;
#define int long long
signed main()
{
int a, b;
cin >> a >> b;
if (b / 2 == a || b / 4 == a)
cout << "Yes";
else if ((b - 2) / 2 == a || (b - 2) / 4 == a)
cout << "Yes";
else cout << "No";
return 0;
}
