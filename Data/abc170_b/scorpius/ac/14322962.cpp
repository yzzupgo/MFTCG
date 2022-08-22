#include <bits/stdc++.h>
using namespace std;
int main(void) {
double X, Y;
cin >> X >> Y;
double a, b;
b = Y / 2 - X;
a = X - b;
if(a < 0 || (floor(b) != b) || b < 0){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
return 0;
}
