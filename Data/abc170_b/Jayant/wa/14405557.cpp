#include<iostream>
using namespace std;
#define ll long long int
int main()
{
ll x ,y ;
cin>>x >> y ;
ll a , b ;
b = y-x*2 ;
b/=2 ;
a = (y-4*b)/2 ;
if(a+b==x && (a*2+b*4)==y )
cout<<"Yes"<<endl ;
else
cout<<"No"<<endl ;
}
