#include <iostream>
using namespace std;
int main(){
int A;
int B;
cin >> A;
cin >> B;
if (A >= 13) {
cout << B << endl;
}
else if (A >= 6 && A <= 12) {
cout << B/2 << endl;
}
else if (A < 5) {
cout << 0 << endl;
}
return 0;
}
