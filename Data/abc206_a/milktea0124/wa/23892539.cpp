#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main() {
const int listprice = 206;
int price = 0;
cin >> price;
string message = "Yay!";
if(price * 1.08 > listprice) {
message = ":(";
} else if(price * 1.08 == listprice) {
message = "so-so";
}
cout << message << endl;
return 0;
}
