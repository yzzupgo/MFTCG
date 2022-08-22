#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
#define pri(str) cout << str << endl
using ll = long long;
using P = pair<int, int>;
const ll MX = 1e18;
const long double PI = acos(-1);
int main()
{
int x, y;
cin >> x >> y;
int ans = 4*x - y;
int ans1 = y - 2*x;
if(ans >= 0 && ans1 >= 0 && ans % 2 == 0 && ans1 % 2 == 0)
pri("Yes");
else
pri("No");
return 0;
}
