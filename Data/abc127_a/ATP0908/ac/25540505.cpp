#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int a,b;
cin >> a >> b ;
if ( a < 6) cout << 0 << endl;
else if( a < 13 ) cout << b / 2 << endl;
else cout << b << endl;
}
