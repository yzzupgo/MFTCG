#include <iostream>
using namespace std;
int main() {
double n;
cin >> n;
int num = n * 1.08;
if(num < 206) {
cout << "Yay!" << endl;
}
if(num == 206) {
cout << "so-so" << endl;
}
if(num > 206) {
cout << ":(" << endl;
}
return 0;
}
