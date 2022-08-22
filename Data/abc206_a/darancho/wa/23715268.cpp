#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
int n;
cin >> n;
int price = n * 1.08;
cout << price << endl;
if(price < 206) {
cout << "Yay!" << endl;
} else if(price == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
