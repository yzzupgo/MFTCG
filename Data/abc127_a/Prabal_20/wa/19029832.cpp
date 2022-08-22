#include<iostream>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
if(A>12)
{
cout<<B;
}
else if(A>6 && A<=12)
{
cout<<B/2;
}
else if(A>=0 && A<=6)
{
cout<<0;
}
}
