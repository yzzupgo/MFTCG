#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
if(N * 1.08 > 206) {
cout << "Yay!" << endl;
}
if(N * 1.08 == 206) {
cout << "so-so" << endl;
}
if(N * 1.08 < 206) {
cout << ":(" << endl;
}
}
