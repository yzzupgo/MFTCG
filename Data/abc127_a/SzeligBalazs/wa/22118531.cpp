#include <iostream>
using namespace std;
int main() {
int A;
int B;
cin >> A;
cin >> B;
if(A <= 5){
B = 0;
cout << B;
}
if(A >= 6 && A <= 12){
B = B / 2;
cout << B;
}
if(A <= 13){
B = 100;
cout << B;
}
return 0;
}
