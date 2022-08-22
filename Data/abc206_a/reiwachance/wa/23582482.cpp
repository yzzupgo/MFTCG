#include <iostream>
using namespace std;
int main() {
int N, a;
cin >> N;
a = 1.08 * N;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else if(a < 206) {
cout << ":(" << endl;
}
}
