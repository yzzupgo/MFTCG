#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int x = ((sqrt(8 * n + 1)) - 1) / 2;
int y = (x * (x + 1)) / 2;
if(y < n) {
x++;
}
cout << x;
}
