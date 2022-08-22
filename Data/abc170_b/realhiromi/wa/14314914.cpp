#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if ( y % 2 != 0) {
cout << "No";
return 0;
}
int b = y /2 - x;
int a = x - b;
if (a >=0) {
cout << "Yes";
}else {
cout << "No";
}
}
