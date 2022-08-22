#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, a;
cin >> X >> Y;
a = Y - 2*X;
if( a%2 == 0 ){
if(X >= a/2 && a >= 0)
cout << "Yes" <<endl;
else
cout << "No" <<endl;
}
else
cout << "No" <<endl;
}
