#include <string>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int y;
cin >> y;
int yy = y;
int a[n];
int sum = 0;
int z = n + y;
for (int i = 0; i < n; i++) {
a[i] = y;
y = y + 1;
}
if (yy >= 0) {
for (int i = 1; i < n; i++)
sum = sum + a[i];
}
if (yy < 0 && z > 0) {
for (int i = 0; i < n; i++)
sum = sum + a[i];
}
if (yy < 0 && z <= 0) {
for (int i = 0; i < n - 1; i++)
sum = sum + a[i];
}
cout << sum;
}
