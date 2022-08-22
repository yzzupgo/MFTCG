#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
int N;
cin >> N;
double b;
b = 1.08 * N;
int a = abs(b);
if(a < 206) {
cout << "Yay!" << endl;
} else if(a > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
