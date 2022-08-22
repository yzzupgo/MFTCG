#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
int z=y-2*x;
if(z%2==0)
{ int b=z/2;
if((x-b)>0)
{ cout<<"Yes";}
}
else{cout<<"No";}
}
