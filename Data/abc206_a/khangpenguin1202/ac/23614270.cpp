#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int price = int(n * 1.08);
if(price < 206) {
cout << "Yay!";
}
if(price == 206) {
cout << "so-so";
}
if(price > 206) {
cout << ":(";
}
}
