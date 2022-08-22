#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (x % 2 == 0) {
for (int i = x; i >= 0; i--) {
for (int j = 0; j <= i; j++) {
if (((i * 2) + (j * 4)) == y) {
cout << "Yes" << endl;
return 0;
}
}
}
} else {
for (int i = x; i >= 0; i--) {
for (int j = 0; j < i; j++) {
if (((i * 2) + (j * 4)) == y) {
cout << "Yes" << endl;
return 0;
}
}
}
}
cout << "No" << endl;
}
