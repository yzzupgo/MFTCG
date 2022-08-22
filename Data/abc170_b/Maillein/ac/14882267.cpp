#include <bits/stdc++.h>
using namespace std;
int main(void) {
long X, Y;
cin >> X >> Y;
if (Y % 2 == 0 && 2 * X <= Y && Y <= 4 * X) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
