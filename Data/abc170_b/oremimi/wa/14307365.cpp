#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1) {
cout << "No" << endl;
return 0;
}
if (4 * X <= Y) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
