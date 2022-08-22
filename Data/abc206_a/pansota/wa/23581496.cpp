#include<iostream>
#include<math.h>
#include<string>
#include<sstream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
int n;
cin >> n;
double value = n * 1.08;
if(value < 206) {
cout << "Yay!" << "\n";
} else if(value > 206) {
cout << ":(" << "\n";
} else if(value == 206) {
cout << "so-so" << "\n";
}
}
