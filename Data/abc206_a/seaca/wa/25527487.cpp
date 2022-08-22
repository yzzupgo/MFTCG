#include <iostream>
using namespace std;
int main(void) {
int n, lp;
cin >> n;
n = n * 1.08;
if(n < lp) {
cout << "Yay!" << endl;
} else if(n == lp) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
