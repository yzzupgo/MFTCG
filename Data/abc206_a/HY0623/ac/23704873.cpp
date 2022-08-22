#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int p = 108 * N / 100;
if(p < 206) {
cout << "Yay!" << endl;
}
if(p == 206) {
cout << "so-so" << endl;
}
if(p > 206) {
cout << ":(" << endl;
}
}
