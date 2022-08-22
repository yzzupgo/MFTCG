#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main()
{
int x, y;
cin >> x >> y;
int n = 0;
n = 4 * x - y;
if (n > 0 && n % 2 == 0 && x >= 0 && y >= 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
