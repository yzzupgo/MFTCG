#include <iostream>
using namespace std;
int main() {
int x;
cin >> x;
x *= 1.08;
if(x < 206) {
cout << "Yay!" << endl;
return 0;
} else if(x == 206) {
cout << "so-so" << endl;
return 0;
}
cout << ":(" << endl;
}
