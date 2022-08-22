#include <iostream>
using namespace std;
int main() {
int n;
float k;
cin >> n;
k = 1.08 * n;
if(k < 206) {
cout << "Yay!";
} else if((int) k == 206) {
cout << "so-so";
} else {
cout << ":(" << "\n";
cout << k;
}
}
