#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
#define arep(x,n) for (int x: n)
using namespace std;
int main()
{
int x,y; cin >> x >> y;
int m,n,p;
bool ans;
rep(i,x) {
m = x - i;
n = i;
p = m*2 + n*4;
if(p == y) {
ans = true;
break;
} else {
ans = false;
}
}
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
}
