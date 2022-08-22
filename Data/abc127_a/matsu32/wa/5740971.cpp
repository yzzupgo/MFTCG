#include<iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int price;
if (A > 13) {
price = B;
}
else if (A < 5) {
price = 0;
}
else {
price = B / 2;
}
cout << price << endl;
}
