#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
typedef long long ll;
int a, b;
int main()
{
ios::sync_with_stdio(false);
cin >> a >> b;
bool flag = 0;
for (int i = 1; i <= a; i++)
if (i * 2 + (a - i) * 4 == b) flag = 1;
if (flag) cout << "Yes" << endl;
else cout << "No\n";
return 0;
}
