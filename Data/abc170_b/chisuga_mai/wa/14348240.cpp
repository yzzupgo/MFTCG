#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
bool a = Y >2*X;
if (Y%2 == 0 && a) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
