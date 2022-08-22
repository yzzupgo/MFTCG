#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int main(){
string ans = "No";
int x, y;
cin >> x >> y;
int b = (y - 2*x) / 2;
int a = x - b;
if (a >= 0 && b >= 0 && 2 * a + 4 * b == y) ans = "Yes";
cout << ans << endl;
return 0;
}
