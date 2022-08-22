#include <iostream>
using namespace std;
int main() {
int N, price;
cin >> N;
price = 1.08 * N;
if(price < 206) {
cout << "Yay!" << endl;
} else if(price == 206) {
cout << "so-so" << endl;
} else if(price > 206) {
cout << ":(" << endl;
}
cout << price << endl;
return 0;
}
