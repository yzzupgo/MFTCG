#include <iostream>
using namespace std;
int main(void){
int X, Y;
cin >> X >> Y;
if(Y % 2 != 0)
cout << "No" << endl;
else if(X * 4 >= Y && X * 2 <= Y)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
