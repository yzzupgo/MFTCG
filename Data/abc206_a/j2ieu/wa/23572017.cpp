#include <iostream>
using namespace std;
int main() {
float a;
cin >> a;
a *= 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
