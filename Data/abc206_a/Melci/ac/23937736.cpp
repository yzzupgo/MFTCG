#include<bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <string>
using namespace std ;
int main() {
int a, b;
cin >> a;
b = a * 108 / 100;
if(b < 206) {
cout << "Yay!" << endl;
} else if(b == 206) {
cout << "so-so" << endl;
} else if(b > 206) {
cout << ":(" << endl;
}
}
