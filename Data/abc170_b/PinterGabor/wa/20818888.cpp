#include <iostream>
using namespace std;
int main() {
int a;
int b;
cin >> a >>b;
if (a == b/2 && a == b/4){
cout << "Yes";
}
if (b%2 == 1){
cout << "No";
}
if (b/4 > a){
cout << "No";
}
if (b%a%2 == 1){
cout << "No";
}
if (b%a%2 == 0 && b/4 <= a && b%2 == 0){
cout <<"Yes";
}
return 0;
}
