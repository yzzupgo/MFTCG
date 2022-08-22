#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
double s = n * 1.08;
if(s / 1 == 206) {
cout << "so-so" << endl;
} else if(s / 1 < 206) {
cout << "yay!" << endl;
} else {
cout << ":(" << endl;
}
}
