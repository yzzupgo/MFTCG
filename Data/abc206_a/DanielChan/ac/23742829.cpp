#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a;
cin >> a ;
int price = floor(a * 1.08);
if(price > 206) {
cout << ":(";
} else if(price < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
