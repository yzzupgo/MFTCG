#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
N = N * 1.08;
N = N * 100 / 100;
if(N < 206.0) {
cout << "Yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
