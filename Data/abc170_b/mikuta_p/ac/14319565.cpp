#include <iostream>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
bool flag = false;
for (int i=0; i<=X; i++) {
for (int j=0; j<=X-i; j++) {
if (i==0 && j==0) continue;
int leg = i*2 + j*4;
int total = i + j;
if (leg==Y && total==X) {
flag = true;
break;
}
}
if (flag == true) break;
}
if (flag == true) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
