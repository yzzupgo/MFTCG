#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(y % 2 != 0) cout <<"No" << endl;
else if(x*4 >= y) cout << "Yes" << endl;
else cout << "No" << endl;
}
