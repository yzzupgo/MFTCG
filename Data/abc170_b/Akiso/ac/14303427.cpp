#include <iostream>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool flg = false;
rep(i, X+1) {
if (i * 2 + (X - i) * 4 == Y) {
cout << "Yes";
flg = true;
break;
}
}
if (!flg)cout << "No";
return 0;
}
