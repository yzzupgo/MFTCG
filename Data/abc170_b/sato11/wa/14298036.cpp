#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int c = X, t = 0;
bool ans = false;
while (0 < c) {
if (2 * c + 4 * t == Y) {
cout << "Yes" << endl;
return 0;
} else {
c--, t++;
}
}
cout << "No" << endl;
return 0;
}
