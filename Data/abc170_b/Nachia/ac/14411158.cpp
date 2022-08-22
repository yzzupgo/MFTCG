#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i = 0; i < (n); i++)
int main() {
UL X, Y; cin >> X >> Y;
bool ok = true;
if (Y % 2) ok = false;
if (Y < X * 2) ok = false;
if (Y > X * 4) ok = false;
cout << (ok ? "Yes" : "No") << endl;
return 0;
}
