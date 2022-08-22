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
cout<<a<<" " <<b <<endl ;
}
