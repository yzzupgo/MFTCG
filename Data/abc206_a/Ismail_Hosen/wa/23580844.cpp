#include<bits/stdc++.h>
using namespace std;
int main() {
double a;
cin >> a;
int b;
b = a * 1.08;
if(b < 206) {
cout << "Yay!";
} else if(b == 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
