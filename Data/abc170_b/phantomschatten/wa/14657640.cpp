#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(y % 2 == 0 && x < y/2) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
