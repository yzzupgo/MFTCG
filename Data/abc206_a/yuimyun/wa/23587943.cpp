#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 191) {
cout << ":(" << endl;
}
if(N == 191) {
cout << "so-so" << endl;
}
if(N > 191) {
cout << "Yay!" << endl;
}
return 0;
}
