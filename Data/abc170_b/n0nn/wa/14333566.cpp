#include <bits/stdc++.h>
typedef long long LL;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 != 0) {
cout << "No" << endl;
return 0;
}
int tsuru, kame;
tsuru = 2*X - Y/2;
kame = -1*X + Y/2;
if (tsuru + kame == X && (tsuru > 0 && kame > 0)) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
