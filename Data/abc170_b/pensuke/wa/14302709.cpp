#include <iostream>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if(0 != Y%2){
cout << "No" << endl;
return 0;
}
if(Y/2 <= 2*X){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
