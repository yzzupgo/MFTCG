#include <iostream>
using namespace std;
int main() {
int x,y; cin >> x >> y;
int b = (4*x - y);
if (b%2 == 0 && b >= 0 && x-b >= 0) {
cout << "Yes" << endl;
}else {
cout << "No" << endl;
}
}
