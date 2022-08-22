#include <bits/stdc++.h>
using namespace std;
long double n;
int main() {
if(fopen("A.inp", "r")) {
freopen("A.inp", "r", stdin);
freopen("A.out", "w", stdout);
}
cin >> n;
n = (int)1.08 * n;
if(n > 206) {
cout << ":(";
}
if(n == 206) {
cout << "so-so";
}
if(n < 206) {
cout << "Yay!";
}
}
