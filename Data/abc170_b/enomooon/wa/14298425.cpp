#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y, a, b;
cin >> X >> Y;
a = (4*X - Y) / 2;
b = X - a;
if (a + b == X && 2*a + 4*b == Y) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
