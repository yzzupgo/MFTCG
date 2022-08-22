#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n, p;
scanf("%d", &n);
p = floor(n * 1.08);
if(p > n) {
cout << "Yay!" << endl;
} else if(p == n) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
