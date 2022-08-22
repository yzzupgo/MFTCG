#include <iostream>
using namespace std;
int main() {
double n;
cin >> n;
double tax;
tax = n * 1.08;
if(tax < 206) {
cout << "Yay!" << endl;
}
if(tax > 206) {
cout << "so-so" << endl;
}
if(tax == 206) {
cout << ":(" << endl;
}
return 0;
}
