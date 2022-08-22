#include "bits/stdc++.h"
using namespace std;
#define long int64_t
struct Solver {
void solve() {
int X, Y;
cin >> X >> Y;
string ans = "No";
for( int i = 0; i <= X; ++i ) {
int a = 2*i;
int b = 4*(X-i);
if( a+b == Y ) {
ans = "Yes";
}
}
cout << ans << endl;
}
};
int main() {
ios::sync_with_stdio( false );
cout << fixed << setprecision( 10 );
Solver().solve();
return 0;
}
