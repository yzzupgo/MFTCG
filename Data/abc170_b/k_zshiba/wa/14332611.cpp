#include <iostream>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
if((Y%2!=0)||(2*X>Y&&Y>4*X)){
cout << "No";
}else{
cout << "Yes";
}
}
