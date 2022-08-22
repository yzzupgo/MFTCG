#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,x,y,z;
cin>>a>>b;
x=a+b;
y=a-b;
z=a*b;
if(x>y && x>z){
cout<<x<<endl;
}
else if(y>z && y>x){
cout<<y<<endl;
}
else if(z>y && z>x){
cout<<z<<endl;
}
return 0;
}
