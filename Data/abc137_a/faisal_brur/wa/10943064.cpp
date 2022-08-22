#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,x,y;
cin>>x>>y;
a=x+y;
b=x-y;
c=x*y;
if((a>b)&&(a>c)){
cout<<a<<endl;
}
else if((b>c)&&(b>a)){
cout<<b<<endl;
}
else{
cout<<c<<endl;
}
return 0;
}
