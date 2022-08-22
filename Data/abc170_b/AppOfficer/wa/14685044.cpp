#include <bits/stdc++.h>
using namespace std;
int x, y;
int main() {
ios::sync_with_stdio(0);
cin >> x >> y;
if(((2 * x) > y) || (y > (4 * x))) cout << "No" << endl;
else cout << "Yes" << endl;
}
