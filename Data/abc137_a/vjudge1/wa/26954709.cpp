#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int n1 = A + B;
int n2 = A- B;
int n3 = A * B;
if(n1 > n2 && n1 > n3)
cout << n1;
else if(n2 > n1 && n2 > n3)
cout << n2;
else
cout << n3;
return 0;
}
