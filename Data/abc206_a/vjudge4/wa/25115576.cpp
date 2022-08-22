#include <iostream>
using namespace std;
int main() {
int price;
cin >> price;
int tax_included_price = price + ((8 * price) / 100);
cout << tax_included_price << endl;
if(tax_included_price < 206) {
cout << "Yay!\n";
} else if(tax_included_price == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
