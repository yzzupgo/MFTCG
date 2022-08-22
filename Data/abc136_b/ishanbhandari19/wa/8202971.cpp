#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int dig =0;
int x =n;
while(x!=0)
{
dig++;
x=x/10;
}
if(dig==1)
cout<<n;
else if(dig==2)
cout<<"9";
else if(dig==3)
cout<<9+n-100+1;
else if(dig==4)
cout<<"900";
else if(dig==5)
cout<<900+n-10000+1;
else
cout<<90909;
return 0;
}
