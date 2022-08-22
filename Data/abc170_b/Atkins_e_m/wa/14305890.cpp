#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
if (Y%2==0) {
if (Y<=X*4) {
cout << "Yes";
}
if (Y>=X*4) {
cout << "No";
}
}
if (Y%2!=0) {
cout << "No";
}
cout << endl;
}
