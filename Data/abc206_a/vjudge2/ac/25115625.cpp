#include <iostream>
using namespace std;
int main() {
int price;
cin >> price;
int tax_included_price = price + ((8 * price) / 100);
if(tax_included_price < 206) {
cout << "Yay!";
} else if(tax_included_price == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
