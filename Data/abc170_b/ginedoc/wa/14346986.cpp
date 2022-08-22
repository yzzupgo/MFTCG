#include <iostream>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if ((Y%4)%2==0 && (Y/4)<X)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
