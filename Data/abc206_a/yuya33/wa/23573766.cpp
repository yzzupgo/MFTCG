#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
int n;
cin >> n;
int a = 1.08 * n;
if(a < 206) {
cout << "Yay!";
} else if(a == 208) {
cout << " so-so";
} else {
cout << ":(";
}
cout << endl;
return 0;
}
