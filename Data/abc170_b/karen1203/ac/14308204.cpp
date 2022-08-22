#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1001001001;
int main() {
int X, Y, kame, turu;
cin >> X >> Y;
kame = (Y/2) - X;
turu = X - kame;
if(kame>=0 && turu>=0 && X==kame+turu && Y==2*turu+4*kame) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
