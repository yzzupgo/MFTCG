#include <iostream>
using namespace std;
int main(void) {
double n;
cin >> n;
double ans = n * 1.08;
if(ans > 207) {
cout << ":(" << endl;
} else if(ans >= 206 && ans < 207) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
