#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int a;
a = 4 * X - Y;
if(a % 2 == 0 && a >= 0 && a / 2 <= X){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
