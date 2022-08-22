#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
n *= 1.08;
if(n == 206) {
cout << "so-so" << endl;
}
if(n > 206) {
cout << ":(" << endl;
}
if(n < 206) {
cout << "Yay!" << endl;
}
}
