#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
