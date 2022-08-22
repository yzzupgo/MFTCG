#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
int A, B;
cin >> A >> B;
if (A >= 13)
cout << B << endl;
else if ( B <= 5)
cout << "0" << endl;
else
cout << B /2 << endl;
}
