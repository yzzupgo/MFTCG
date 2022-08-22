#include<iostream>
using namespace std;
int main(){
int A,B,x,y,z;
cin >> A >> B;
x=A+B;
y=A-B;
z=A*B;
if(x>=y&&x>=z){cout << x <<endl;}else if(y>=z&&y>x){cout <<y<<endl;}else if(z>x&&z>y){cout << z<<endl;}
return 0;
}
