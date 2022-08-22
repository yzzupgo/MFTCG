#include <bits/stdc++.h>
using namespace std;
int main() {
int A, N;
cin >> N;
A = N * 108 / 100;
if(A < 206) {
cout << "Yay!" << endl;
}
if(A == 206) {
cout << "so-so" << endl;
}
if(A > 206) {
cout << ":(" << endl;
}
}
