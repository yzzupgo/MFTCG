#include <iostream>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
if(Y % X > 1 ){
cout << "Yes" << endl;
}
else if(X == 1){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
