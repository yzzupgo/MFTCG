#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool result = false;
for(int i = 0; i <= x; i++) {
if(y == 2 * i + 4 * (x - i)) {
result = true;
break;
}
}
if(result) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
