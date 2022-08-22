#include <iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
int b = 0;
for(int a = 1; a < n; a++) {
b = a + b;
if(b >= n) {
cout << a;
break;
}
}
}
