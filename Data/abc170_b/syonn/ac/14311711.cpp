#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, crane, turtle;
bool result = false;
cin >> x >> y;
if (y % 2 == 1) {
result = false;
} else {
crane = y / 2;
turtle = y / 4;
if (x > crane || x < turtle) {
result = false;
} else {
turtle = 0;
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
