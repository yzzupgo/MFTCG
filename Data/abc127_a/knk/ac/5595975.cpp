#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
typedef signed long long ll;
ul over = 1000000007;
mt19937 mt(time(nullptr));
int main(void)
{
cin.tie(0);
ios::sync_with_stdio(false);
cout << fixed;
int a, b;
cin >> a >> b;
if (a>=13) cout << b << endl;
else if (a>=6) cout << b/2 << endl;
else cout << 0 << endl;
return 0;
}
