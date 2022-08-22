#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(void) {
int i,j,k=0;
int x, y,z=0;
cin >> x; cin >> y;
for (i = 0; i <= x; i++) {
z = y;
k = 0;
for (j = x-i; j >=0; j--) {
if (z >= 4) {
z -= 4;
k++;
}
}
if (z >= 2) {
z -= 2;
k++;
}
if (z == 0&&i==k) {
cout << "Yes";
break;
}
}
if (z != 0) {
cout << "No";
}
return 0;
}
