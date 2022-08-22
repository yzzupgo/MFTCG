#include <iostream>
using namespace std;
int main(void) {
int N, y = 206, x;
cin >> N;
x = 108 * N / 100;
if(x < y) {
cout << "Yay!" << endl;
} else if(x == y) {
cout << "so-so" << endl;
} else if(x > y) {
cout << ":(" << endl;
}
}
