#include<iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if ((4*x)+2 < y || y%2 != 0) {
cout << "No\n";
} else {
cout << "Yes\n";
}
return 0;
}
