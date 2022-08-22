#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
int a;
cin >> a;
if(a * 1.08 < 206) {
cout << "Yay!";
} else if(round(a * 1.08) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
