#include<bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (y%2 == 1) cout << "No" << endl;
else if (x*2 <= y && x*4 >= y) cout << "Yes" << endl;
else cout << "No" << endl;
}
