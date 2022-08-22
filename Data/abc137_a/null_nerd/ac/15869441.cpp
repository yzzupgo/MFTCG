#include<iostream>
#include<math.h>
using namespace std;
int main(){
double a,b,c,d=0,e=0,x=0,y=0,z=0;
cin>>a>>b;
x=a+b;
y=a-b;
z=a*b;
x=max(x,y);
y=max(x,z);
cout<<y;
return 0;
}
