#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
int n;
cin >> n;
if((n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(floor(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":)" << endl;
}
}
