#include <iostream>
using namespace std;
int main(void) {
int n;
double x;
cin >> n;
x = 1.08 * n;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else if(x > 206) {
cout << ":(" << endl;
}
}
