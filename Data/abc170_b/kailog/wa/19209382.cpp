#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool result = false;
for(int i = 1; i <= x; i++) {
int sum = 0;
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
