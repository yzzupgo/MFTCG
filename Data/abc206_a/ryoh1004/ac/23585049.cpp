#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
int N = 0, x = 0;
cin >> N;
x = floor(N * 1.08);
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
