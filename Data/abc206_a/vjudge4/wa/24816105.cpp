#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 1.08 > 206) {
cout << ":(" << endl;
} else if(n * 1.08 < 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
