#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(1.08 * N > 206.29) {
cout << ":( " << endl;
cout << 1.08 * N;
} else if(1.08 * N < 206.29) {
cout << "Yay!" << endl;
cout << 1.08 * N;
} else if(205.3 < 1.08 * N < 206.29) {
cout << "so-so" << endl;
cout << 1.08 * N;
}
}
