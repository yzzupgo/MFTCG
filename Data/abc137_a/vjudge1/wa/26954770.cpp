#include <iostream>
using namespace std;
int main() {
int x, b;
cin >> x >> b;
int n1 = x + b;
int n2 = x - b;
int n3 = x * b;
if(n1 > n2 && n1 > n3)
cout << n1;
else if(n2 > n1 && n2 > n3)
cout << n2;
else
cout << n3;
return 0;
}
