#include <bits/stdc++.h>
using namespace std;
#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
int main() {
int a, b; cin >> a >> b;
if(13 <= a) cout << b << endl;
else if(6 <= a && a <= 12) cout << b / 2 << endl;
else cout << 0 << endl;
return 0;
}
