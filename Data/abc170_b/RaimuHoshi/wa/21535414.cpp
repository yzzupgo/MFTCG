#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool exist = false;
for(int i = 1; i <= X; i++) {
int legs = 0;
legs += i * 2;
legs += (X - i) * 4;
if(legs == Y) {
exist = true;
break;
}
}
if(exist) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
