#include <iostream>
using namespace std;
int main(void) {
double num;
double tax = 1.08;
int teika = 206;
cin >> num;
if(int(num * tax) < teika) {
cout << "Yay!" << endl;
} else if(int(num * tax) == teika) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
