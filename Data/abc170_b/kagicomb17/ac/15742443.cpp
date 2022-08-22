#include <iostream>
using namespace std;
int main(void){
int X, Y;
cin >> X >> Y;
if(Y>X*4){
cout << "No";
}else if(Y<X*2){
cout << "No";
}else if(Y%2==1){
cout << "No";
}else{
cout << "Yes";
}
}
