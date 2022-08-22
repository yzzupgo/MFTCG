#include <iostream>
using namespace std;
int main()
{
int x,y;
int res =0, aux=0;
cin>>x;
cin>>y;
while(x>=0){
res = 4*x+2*aux;
x--;
aux++;
if(res == y){
cout<<"Yes";
break;
}
}
if(res!=y){
cout<<"No";
}
return 0;
}
