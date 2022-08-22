#include <iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
int m;
m = (n * 1.08 * 100) / 100;
if(m < 206) {
cout << "Yay!";
} else if(m == 206) {
cout << "soso";
} else {
cout << ":(";
}
}
