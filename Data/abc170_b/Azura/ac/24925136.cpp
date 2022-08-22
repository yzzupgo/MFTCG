#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
int x, y; cin >> x >> y;
bool oke = false;
for(int a = 0; a <= x; a++) {
int b = x - a;
if (2 * a + 4 * b == y){
oke = true;
}
}
cout << ((oke)?"Yes":"No");
}
