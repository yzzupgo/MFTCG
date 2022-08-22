#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main () {
ll i, n;
ll m = 1;
ll ret;
cin >> n >> m;
if ( ( ((m-2*n)/2) > n ) || (((m-2*n)/2) < 0) ) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
