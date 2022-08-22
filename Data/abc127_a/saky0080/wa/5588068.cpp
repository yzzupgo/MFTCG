#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int mod = 1e9+7;
const ll INF = 1e18;
const int inf = 1e9;
void solve()
{
int a,b;
cin>>a>>b;
if (a<=6) {
cout << 0 << endl;
} else if (a>=13) {
cout << b << endl;
} else {
cout << b/2 << endl;
}
}
int main()
{
solve();
return 0;
}
