#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a;
cin >> a ;
int price = floor(a * 8 % + a);
if(price > 207) {
cout << ":(";
} else if(price < 207) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
