#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
if (Y%2==0&&Y>=X*2) {
if (Y<=X*4) {
cout << "Yes";
}
if (Y>=X*4) {
cout << "No";
}
}
if (Y%2!=0||Y<X*2) {
cout << "No";
}
cout << endl;
}
