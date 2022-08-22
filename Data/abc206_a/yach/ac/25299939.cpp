#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n *= 1.08;
if((int)n < 206) {
cout << "Yay!" << endl;
} else if((int)n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
