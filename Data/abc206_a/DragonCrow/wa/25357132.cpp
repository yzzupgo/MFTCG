#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
int n;
cin >> n;
n *= 108;
n /= 100;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":)" << endl;
}
}
