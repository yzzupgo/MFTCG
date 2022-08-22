#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main() {
const int listprice = 206;
int price = 0;
cin >> price;
string message = "Yay!";
price = price * 1.08;
if(price > listprice) {
message = ":(";
}
if(price == listprice) {
message = "so-so";
}
cout << message << endl;
return 0;
}
