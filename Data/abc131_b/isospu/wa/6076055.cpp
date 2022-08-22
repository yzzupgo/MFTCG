#include <iostream>
#include<iomanip>
#include <cstdint>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int abs( int a ) { return a < 0 ? -a : a; }
int main() {
int64_t n, l;
cin >> n >> l;
int64_t c = 0;
for ( int i = 0; i < n; i++ ) c += l + i;
if ( l < 0 && l + n < 0 ) {
c -= l + n - 1;
}
else if ( 0 < l && 0 < l + n ) {
c -= l;
}
cout << c << endl;
return 0;
}
