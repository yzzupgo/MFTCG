#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
if(Y%2 != 0){cout << "No" << endl;}
else{
if( (Y+0.5)/4 <= X && X <= Y/2) {cout << "Yes" << endl;}
else{cout << "No" << endl;}
}
}
