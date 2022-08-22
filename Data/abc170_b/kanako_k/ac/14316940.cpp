#include <iostream>
using namespace std;
int main(void){
int x,y,a,b,mod_a,mod_b;
cin >> x >> y;
a = ( 4*x - y)/2;
b = ( -2*x + y)/2;
mod_a = ( 4*x - y)%2;
mod_b = ( -2*x + y)%2;
if( (mod_a==0)&&(mod_b==0)&&
(a>=0)&&(b>=0)){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
