#include<iostream>
#include<math.h>
using namespace std;
int main(){
double a,b,c,d=0,e=0,x=0,y=0,z=0;
cin>>a>>b;
x=a+b;
y=a-b;
z=a*b;
cout<<max((x,y),z);
return 0;
}
