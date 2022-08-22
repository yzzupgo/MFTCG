#include <iostream>
#include <algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main() {
int a;
double x;
cin >> a;
x = 1.08 * a;
if(x < 208) {
cout << "Yay!" << endl;
} else if(x > 208) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
