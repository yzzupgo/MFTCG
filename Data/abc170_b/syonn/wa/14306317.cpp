#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, crane = 0, turtle = 0;
bool result;
cin >> x >> y;
if (y % 2 == 1) {
result = false;
} else {
crane = y / 2;
if (x > crane) {
result = false;
} else {
while (crane >= 0) {
if (crane + turtle == x) {
result = true;
break;
}
crane -= 2;
turtle++;
}
}
}
if (result) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
