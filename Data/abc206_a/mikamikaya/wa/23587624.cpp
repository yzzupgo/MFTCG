#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
int N;
cin >> N;
double a;
a = abs(1.08 * N);
if(a < 206) {
cout << "Yay!" << endl;
} else if(a > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
