#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
using ll = long long;
int main() {
double a;
cin >> a;
double b = 1.08 * a;
if(b > 206) {
cout << ":(";
} else if(b == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
