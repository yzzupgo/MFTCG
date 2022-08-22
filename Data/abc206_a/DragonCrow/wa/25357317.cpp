#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n;
cin >> n;
int p = n * 108 / 100;
if(p < 206) {
cout << "Yay!" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else {
cout << ":)" << endl;
}
}
