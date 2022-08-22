#include <bits/stdc++.h>
using namespace std;
int main(void) {
double X, Y;
cin >> X >> Y;
double a, b;
b = Y / 2 - X;
a = X - b;
if(a < 0 || (floor(b) != b)){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
return 0;
}
