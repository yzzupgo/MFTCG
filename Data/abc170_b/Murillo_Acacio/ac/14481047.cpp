#include<iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (2*x <= y && y <= 4*x && y%2 == 0) {
cout << "Yes\n";
} else {
cout << "No\n";
}
return 0;
}
