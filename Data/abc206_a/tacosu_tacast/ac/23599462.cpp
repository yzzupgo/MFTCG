#include <bits/stdc++.h>
using namespace std;
int main() {
double a, b;
int c;
cin >> a;
b = a * (1.08);
if(206.0 <= b && b <= 206.9) {
cout << "so-so";
} else if(b < 205.9) {
cout << "Yay!";
} else if(b >= 207) {
cout << ":(";
}
}
