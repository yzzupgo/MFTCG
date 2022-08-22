#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i < x+1; i++) {
for (int ii = x; ii > -1; ii--){
if (i*2+ii*4 == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
