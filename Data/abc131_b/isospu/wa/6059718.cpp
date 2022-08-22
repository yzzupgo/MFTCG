#include <iostream>
#include<iomanip>
#include <cstdint>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int abs( int a ) { return a < 0 ? -a : a; }
int main() {
int n, l;
cin >> n >> l;
if ( l + n < 0 ) n--;
else if ( 0 < l ) l++, n--;
int c = 0;
for ( int i = 0; i < n; i++ ) c += l + i;
cout << c << endl;
return 0;
}
