#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(1.08 * N > 206.28) {
cout << ":( " << endl;
} else if(1.08 * N < 206.28) {
cout << "Yay!" << endl;
} else if(205.3 < 1.08 * N < 206.29) {
cout << "so-so" << endl;
}
}
