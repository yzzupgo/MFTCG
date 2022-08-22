#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x, y;
cin >> x >> y;
if(2L * x > y || y > 4L * x || y % 2) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
