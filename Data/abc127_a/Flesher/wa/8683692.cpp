#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
int a, b;
cin >> a >> b;
if(a <= 5) cout << 0 << endl;
else if(a > 5 && a < 14) cout << b/2 << endl;
else cout << b << endl;
return 0;
}
