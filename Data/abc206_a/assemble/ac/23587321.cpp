#include <bits/stdc++.h>
using namespace std;
int main() {
int N ;
cin >> N;
int k = 0;
k = 1.08 * N;
k = k / 1;
if(k > 206) {
cout << ":(" << endl;
}
if(k == 206) {
cout << "so-so" << endl;
}
if(k < 206) {
cout << "Yay!" << endl;
}
}
