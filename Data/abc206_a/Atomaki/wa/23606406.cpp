#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int p = N * 1.08;
if(p < 206) {
cout << "Yay!" << endl;
} else if(p = 206) {
cout << "so-so" << endl;
} else if(p > 206) {
cout << ":(" << endl;
}
}
