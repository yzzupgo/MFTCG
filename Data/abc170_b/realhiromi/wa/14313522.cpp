#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
int b = y /2 - x;
int a = x - b;
if (a >=0) {
cout << "Yes";
}else {
cout << "No";
}
}
