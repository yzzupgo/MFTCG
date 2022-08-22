#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int x, y, asi, husoku;
cin >> x >> y;
rep(i, x) {
asi = (2 * (x-i)) + 4 * i;
if (asi == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
