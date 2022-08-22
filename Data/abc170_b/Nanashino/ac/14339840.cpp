#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(void) {
int i,j,k=0;
int x, y,z=0;
int e = 0;
cin >> x; cin >> y;
for (i = 0; i <= x; i++) {
z = y;
k = 0;
for (j = x-i; j >0; j--) {
if (z >= 4) {
z -= 4;
k++;
}
}
if (i != 0) {
for (j = 0; j < i; j++) {
if (z >= 2) {
z -= 2;
k++;
}
}
}
if ((z == 0)&&(x==k)) {
cout << "Yes";
e = 1;
break;
}
}
if (e != 1) {
cout << "No";
}
return 0;
}
