#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 191) {
cout << "Yay!" << endl;
} else if(N == 191) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
