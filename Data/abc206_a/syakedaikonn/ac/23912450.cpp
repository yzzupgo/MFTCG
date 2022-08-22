#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int s = n * 1.08 / 1;
if(s == 206) {
cout << "so-so" << endl;
} else if(s < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
