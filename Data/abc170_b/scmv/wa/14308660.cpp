#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main () {
ll i, n;
ll m = 1;
ll ret;
cin >> n >> m;
i = ( n * 4 - m ) / 2;
if ( i < 0 ) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
