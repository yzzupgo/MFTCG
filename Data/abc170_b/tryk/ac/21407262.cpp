#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if(4 * X < Y){
cout << "No" << endl;
}else{
int amari = (4 * X - Y) % 2;
int ans = (4 * X - Y) / 2;
if(amari == 0 && ans <= X){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
}
