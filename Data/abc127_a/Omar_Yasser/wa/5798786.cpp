#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a, b;
cin >> a >> b;
if (a >= 13) cout << b;
else if (b <= 12 && b >= 5) cout << b/2;
else cout << "0";
return 0;
}
