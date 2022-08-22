#include <bits/stdc++.h>
typedef long long LL;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int tsuru, kame;
if (Y % 2 != 0)
cout << "No" << endl;
tsuru = 2*X - Y/2;
kame = -1*X + Y/2;
cout << tsuru << endl;
cout << kame << endl;
if (tsuru + kame == X) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
