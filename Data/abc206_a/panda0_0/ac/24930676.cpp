#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
int a = n *= 1.08;
if(a > 206) {
cout << ":(";
} else if(a == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
