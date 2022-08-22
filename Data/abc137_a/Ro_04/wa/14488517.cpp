#include <iostream>
using namespace std;
int main() {
int A , B ;
int X , Y , Z ;
cin >> A >> B ;
X = A + B;
Y = A - B;
Z = A * B;
if ( X > Y && X > Z) cout << X << endl;
else if (Y > X && Y > Z) cout << Y << endl;
else cout << Z << endl;
return 0;
}
