#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if(4 * X >= Y && Y >= 2 * X){
cout << "Yes" << endl;
}
else if(Y % 2 == 1){
cout << "No" << endl;
}
else{
cout << "No" << endl;
}
}
