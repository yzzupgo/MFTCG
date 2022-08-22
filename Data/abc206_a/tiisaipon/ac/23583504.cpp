#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
x = x * 1.08;
if(x < 206) {
cout << "Yay!" << endl;
}
if(x == 206) {
cout << "so-so" << endl;
}
if(x > 206) {
cout << ":(" << endl;
}
}
