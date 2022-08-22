#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n;
cin >> n;
int price = n * 108 / 100;
if(price < 206) {
cout << "Yay!" << endl;
} else if(price == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
