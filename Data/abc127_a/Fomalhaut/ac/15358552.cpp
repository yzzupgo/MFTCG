#include <bits/stdc++.h>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int a, b, c, d;
cin >> a>>b;
if (a >= 13) {
cout << b << endl;
return 0;
}
if ( a >= 6){
cout << b / 2 << endl;
return 0;
}
else {
cout << 0 << endl;
}
return 0;
}
