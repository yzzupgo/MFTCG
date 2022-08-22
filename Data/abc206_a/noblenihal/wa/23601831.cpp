#include<iostream>
#include<math.h>
using namespace std;
int main() {
int n;
cin >> n;
n = n * 2;
int i = sqrt(n);
int exp = pow(i, 2) + i;
while(exp != n && exp < n) {
++i;
exp = pow(i, 2) + i;
}
cout << i;
return 0;
}
