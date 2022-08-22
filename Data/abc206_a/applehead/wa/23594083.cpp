#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int A = floor(1.08 * N);
if(A < 206) {
cout << "Yay!" << endl;
}
if(A > 206) {
cout << ":(" << endl;
}
if(A = 206) {
cout << "so-so" << endl;
}
}
