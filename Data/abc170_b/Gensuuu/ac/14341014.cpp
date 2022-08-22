#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if( Y % 2 == 1 || X > 50){
cout << "No" << endl;
}
else if(4 * X >= Y && Y >= 2 * X){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
