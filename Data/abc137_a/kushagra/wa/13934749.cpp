#include <iostream>
#include <string>
using namespace std;
int main() {
int A;
cin >> A ;
int B;
cin >> B;
if ( A+B > A-B && A+B >= A*B){
cout << A+B << endl;
} else if (A-B > A+B && A-B > A*B){
cout << A-B << endl;
} else if (A*B >= A+B && A*B > A-B){
cout << A*B << endl;
}
return 0;
}
