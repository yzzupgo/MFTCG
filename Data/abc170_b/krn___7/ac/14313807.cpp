#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
typedef long long ll;
int main() {
int x, y;
cin >> x >> y;
int c = x * 2;
for (int i = 0; i <= x; ++i) {
if (c == y) {
cout << "Yes" << endl;
return 0;
}
c += 2;
}
cout << "No" << endl;
return 0;
}
