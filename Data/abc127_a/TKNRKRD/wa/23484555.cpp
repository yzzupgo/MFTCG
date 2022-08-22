#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); i++)
int main()
{
int a, b;
cin >> a >> b;
if(a < 6) cout << 0 << endl;
else if(a < 13) cout << a / 2 << endl;
else cout << a << endl;
return 0;
}
