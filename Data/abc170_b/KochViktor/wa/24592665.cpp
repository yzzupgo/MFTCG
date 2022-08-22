#include <iostream>
using namespace std;
int main() {
int x;
int y;
cin >> x >> y;
if (y > 4 * x) {
cout << "NO";
} else if (y % 2 == 1) {
cout << "NO";
} else {
cout << "YES";
}
return 0;
}
