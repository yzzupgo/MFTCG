#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int p = (108 * n) / 100;
if(p < 206) {
cout << "Yay!" << endl;
}
if(p == 206) {
cout << "so-so" << endl;
}
if(p > 206) {
cout << ":(" << endl;
}
return 0;
}
