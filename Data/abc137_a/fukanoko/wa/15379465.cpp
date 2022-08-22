#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int x = a + b;
int y = a - b;
int z = a * b;
if(x > y && x > z) {
cout << x << endl;
} else if(y > z && y > x) {
cout << y << endl;
} else{
cout << z << endl;
}
}
