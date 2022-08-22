#include <iostream>
using namespace std;
int main()
{
int r,m,a,c,d;
cin>>r>>m;
a=r*m;
c=r-m;
d=r+m;
if(r>=-100 && m<=100){
if(a>c && a>d){
cout<<a;
}
else if(c>a && c>d){
cout<<c;
}
else if(d>a && d>c){
cout<<d;
}
}else{cout<<"no";}
return 0;
}
