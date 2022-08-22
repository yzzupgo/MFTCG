#include <iostream>
using namespace std;
int main(){
int A;
int B;
int C=0;
cin >> A;
cin >> B;
if (A >= 13) {
cout << B << endl;
}
else if (A >= 6 && A <= 12) {
cout << int(B/2) << endl;
}
else if (A < 5) {
cout << C << endl;
}
return 0;
}
