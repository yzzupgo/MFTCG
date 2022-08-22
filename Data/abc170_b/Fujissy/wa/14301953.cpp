#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define co(x) cout << x;
#define coe(x) cout << x << endl;
int main() {
int X, Y; cin >> X >> Y;
if (Y % 2 == 0 && (X*2 <= Y && Y <= X*4)) {
coe("YES")
} else coe("NO")
}
