#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;cin >> x >> y;int a = (4*x-y)%2;
if (x*4 < y) cout << "No" << endl;
else if (a == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
