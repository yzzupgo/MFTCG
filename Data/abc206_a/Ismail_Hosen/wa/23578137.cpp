#include<bits/stdc++.h>
using namespace std;
int main() {
double a, b;
cin >> a;
b = a * 1.08;
if(b < 206.0) {
cout << "Yay!";
} else if(b == 206.0) {
cout << ":(";
} else {
cout << "so-so";
}
}
