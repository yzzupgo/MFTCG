#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main () {
ll i, j, n;
ll m = 1;
ll ret;
cin >> n >> m;
i = (m - 2*n)/2;
j = (4*n - m)/2;
if ( i < 0 || j < 0 || (i+j) != n ) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
