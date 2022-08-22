#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
n = 1.08 * n;
if(n > 206) {
cout << ":(" << endl;
} else if(n < 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
