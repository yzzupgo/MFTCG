#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
n = n * 1.08;
cout << n << endl;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n > 206) {
cout << ":(" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
}
return 0;
}
