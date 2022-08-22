#include <iostream>
using namespace std;
int main(void){
int X , Y ;
cin >> X >> Y;
int i = Y / 4;
int t = i / 2;
if((i + t) == X){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
