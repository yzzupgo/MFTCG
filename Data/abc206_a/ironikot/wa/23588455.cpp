#include <iostream>
#include <string>
using namespace std;
int main() {
int original_price = 208;
int price;
cin >> price;
int price_with_tax = price * 1.08;
string ans;
if(price_with_tax < 206) {
ans = "Yay!";
} else if(original_price == price_with_tax) {
ans = "so-so";
} else if(price_with_tax > original_price) {
ans = ":(";
}
cout << ans;
return 0;
}
