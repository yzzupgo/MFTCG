#include <iostream>
using namespace std;
int main(void){
int x,y,z;
cin >> x >>y;
if(x>=13){
z=y;
}else if(x>5 && x<=12){
z=y/2;
}else{
z=0;
}
cout << z << endl;
}
