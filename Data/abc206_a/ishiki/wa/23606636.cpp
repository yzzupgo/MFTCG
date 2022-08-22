#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
double k = n * 1.08;
int a = k;
if(a == 206) {
cout << "so-so" << endl;
} else if(a > 206) {
cout << ":(" << endl;
} else {
cout << "Yah!" << endl;
}
}
