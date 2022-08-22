#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(y % 2 == 0 && x < y/2 && 4*x >= y) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
