#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n;
cin >> n;
int p = abs(1.08 * n);
if(p > 206) {
cout << ":(" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
