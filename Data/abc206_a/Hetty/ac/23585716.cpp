#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int tax;
tax = n * 1.08;
if(tax < 206) {
cout << "Yay!" << endl;
}
if(tax > 206) {
cout << ":(" << endl;
}
if(tax == 206) {
cout << "so-so" << endl;
}
return 0;
}
