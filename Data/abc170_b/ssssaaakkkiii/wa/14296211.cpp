#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int result = 1;
if(Y < 2 * X||Y > 4 * X||Y - 2 * X % 2 == 1||4 * X - Y % 2 == 1){
result = 0;
}
if(result == 0)cout << "Yes" << endl;
if(result == 1)cout << "No" << endl;
}
