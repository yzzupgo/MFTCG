#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(1.08 * n - 206 < 0) {
cout << "Yay!";
}
if(1.08 * n - 206 >= 0 && 1.08 * n - 206 < 1) {
cout << "so-so";
}
if(1.08 * n - 206 >= 1) {
cout << ":(";
}
}
