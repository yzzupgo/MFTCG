#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
long long x, y; cin >> x >> y;
if (x != 0 && y != 0)
if (y == 2 * x || y == 4 * x || y == (2 * (x - 1) + 4) || y == (4 * (x - 1) + 2)) cout << "Yes" << "\n";
else cout << "No" << "\n";
}
