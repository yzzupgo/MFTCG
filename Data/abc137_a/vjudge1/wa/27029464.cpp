#include <iostream>
using namespace std;
int main() {
int A, b;
cin >> A >> b;
int n1 = A + b;
int n2 = A - b;
int n3 = A * b;
if(n1 > n2 && n1 > n3)
cout << n1;
else if(n2 > n1 && n2 > n3)
cout << n2;
else
cout << n3;
return 0;
}
