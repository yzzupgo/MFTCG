#include <iostream>
using namespace std;
int main(void) {
int N, y = 206;
double x;
cin >> N;
x = 1.08 * N;
if(x < y) {
cout << "Yay!" << endl;
} else if(x == y) {
cout << "so-so" << endl;
} else if(x > y) {
cout << ":(" << endl;
}
}
