#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for(int i = 0;i < x;i++) {
if(y >= 4) {
y = y - 4;
} else if(y >= 2) {
y = y - 2;
} else if( y == 0) {
cout << "yes" << endl;
break;
} else {
cout << "No" << endl;
break;
}
}
}
