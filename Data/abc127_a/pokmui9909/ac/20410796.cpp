#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
cin.tie(0); cout.tie(0);
ios_base::sync_with_stdio(false);
int a, b;cin >> a >> b;
if(a <= 5) cout << 0;
else if(a <= 12) cout << b / 2;
else cout << b;
}
