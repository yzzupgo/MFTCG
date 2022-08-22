#include<bits/stdc++.h>
using namespace std;
int main() {
double a;
cin >> a;
int b;
b = floor(a * 1.08);
if(b < 206) {
cout << "Yay!";
} else if(b == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
