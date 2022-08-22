#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N > 190) {
cout << ":(" << endl;
} else if(N == 191) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
