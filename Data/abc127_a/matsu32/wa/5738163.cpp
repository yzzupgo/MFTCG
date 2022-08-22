#include<iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int price;
if (A > 13) {
price = B;
}
else if (A >= 6 || A <=12) {
price = B / 2;
}
else {
price = 0;
}
cout << price << endl;
}
