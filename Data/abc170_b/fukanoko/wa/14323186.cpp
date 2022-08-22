#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(x > 0 && 100 >= x && y > 0 && 100 >= y) {
for(int i = 0;i < x;i++) {
if(y >= 4) {
y = y - 4;
} else if(y >= 2) {
y = y - 2;
} else if( y == 0) {
break;
}
}
if(y == 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
else {
cout << "No" << endl;
}
}
