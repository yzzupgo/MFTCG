#include <iostream>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
if ((X * 2 <= Y) && (Y <= X * 4) && (Y % 2 == 0)){
cout << "Yes";
}
else
{
cout << "No";
}
}
