#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int k = n * 1.08;
if(k == 206) {
cout << "so-so" << endl;
} else if(k > 206) {
cout << ":(" << endl;
} else {
cout << "Yah!" << endl;
}
}
