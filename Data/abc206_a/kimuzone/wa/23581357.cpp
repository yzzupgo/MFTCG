#include <iostream>
using namespace std;
int main() {
float N;
cin >> N;
N = N * 1.08;
if(N < 206.0) {
cout << "Yay!" << endl;
} else if(N >= 206.0 || N <= 206.99) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
