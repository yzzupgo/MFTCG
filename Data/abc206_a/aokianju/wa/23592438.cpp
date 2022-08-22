#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(206 < 1.08 * N < 207) {
cout << "so-so" << endl;
} else if(1.08 * N > 206) {
cout << ":( " << endl;
} else if(1.08 * N < 206) {
cout << "Yay!" << endl;
}
}
