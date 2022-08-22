#include <bits/stdc++.h>
using namespace std;
int main(void){
int X, Y, a, b;
cin >> X >> Y;
a = (Y - 2 * X) % 2;
b = (4 * X - Y) % 2;
if(a == 0 && (Y - 2 * X) >= 0 ){
if(b == 0 && (4 * X - Y) >= 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
else{
cout << "No" << endl;
}
}
