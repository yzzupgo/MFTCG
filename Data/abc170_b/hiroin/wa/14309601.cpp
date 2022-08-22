#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main() {
int X, Y;
cin >> X >> Y;
for(int i = 0; i <= 100; i++)
{
if (4 * X - Y == 2 * i)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
