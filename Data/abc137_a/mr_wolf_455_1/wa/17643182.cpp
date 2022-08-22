#include<iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int e = a + b;
int f = a - b;
int g = a * b;
if (e > f && f > g) {
cout << endl << e << endl;
} else if (f > g) {
cout << f << endl;
} else {
cout << g << endl;
}
return 0;
}
