#include <iostream>
using namespace std;
int main(void) {
int N;
cin >> N;
int a = 1.08 * N;
if(a > 206) {
cout << ":(" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else if(a < 206) {
cout << "Yay!" << endl;
}
}
