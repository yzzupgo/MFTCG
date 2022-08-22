#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(4*x < y || y % 2 != 0) {
cout << "No";
}
else {
cout << "Yes";
}
return 0;
}
