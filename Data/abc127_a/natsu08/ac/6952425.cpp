#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main() {
int a, b; cin >> a >> b;
int ans = b;
if(6 <= a && a <= 12) ans /= 2;
if(a < 6) ans = 0;
cout << ans << endl;
return 0;
}
