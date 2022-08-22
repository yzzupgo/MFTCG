#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
n = 108 * n;
n /= 100;
if(n > 206) {
cout << ":(" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
