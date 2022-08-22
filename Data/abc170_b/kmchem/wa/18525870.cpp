#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
ll X, Y;
cin >> X >> Y;
bool ans = false;
for (int i = 0; i*2 <= Y; i++){
ll j = Y - i*2;
if (j%4 == 0) ans = true;
if (ans) break;
}
if (ans) cout << "Yes" << endl;
else cout << "No" << endl;
}
