#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int c = 0; c <= x ; c++) {
for (int t = 0; t <= x ; t++) {
int leg = 2*c + 4*t;
if (leg == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
