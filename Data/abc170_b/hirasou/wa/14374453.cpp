#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, x, y;
bool ans = false;
cin >> X >> Y;
if ( X == 1 ) {
if ( Y == 4 || Y == 2 ) {
x = true;
}
} else {
for ( int i = 0; i < X+1; i++ ) {
x = i;
y = X - i;
if ( x * 4 + y * 2 == Y ) {
ans = true;
break;
}
}
}
if ( ans ) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
