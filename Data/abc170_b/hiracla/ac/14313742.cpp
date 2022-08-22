#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x, y;
cin >> x >> y;
if (x*2>y || x*4<y) {
cout << "No" << endl;
} else if (y%2==1) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
