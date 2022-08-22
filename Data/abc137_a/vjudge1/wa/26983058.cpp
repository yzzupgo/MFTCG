#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int n1=a+b;
int n2=a-b;
int n3=a*b;
if(n1>n2&&n1>n3)
cout << a+b;
else if (n2>n1&&n2>n3)
cout << a-b;
else
cout << a*b;
return 0;
}
