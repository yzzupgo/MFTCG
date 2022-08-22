#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
int A = Y / 2;
int T = A - X;
int C = X - T;
int ans = T + C;
int R = 4 * X;
if(ans == X && Y <= R){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
