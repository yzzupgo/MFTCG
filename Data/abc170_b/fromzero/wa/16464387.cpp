#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i = 0; i < X; i++) {
if(i*4 + (X-i)*2 == Y) {
cout << "Yes" << endl;
break;
}
else if(i == X-1) cout << "No" << endl;
}
}
