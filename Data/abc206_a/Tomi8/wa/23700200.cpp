#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int a = floor(1.08 * n);
if(a < 206) {
cout << "Yay" << '\n';
} else if(a == 206) {
cout << "So-so" << '\n';
} else {
cout << ":(" << '\n';
}
}
