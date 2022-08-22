#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int X,Y;
cin >> X >> Y;
bool ans = false;
for (int i = X; i >= 0; i--) {
if (i * 2 + (X - i) * 4 == Y) ans = true;
}
cout << (ans ? "Yes" : "No") << endl;
return 0;
}
