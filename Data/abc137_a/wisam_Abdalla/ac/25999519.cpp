#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int s=a+b;
int m=a*b;
int mi=a-b;
if(s>=m && s>=mi)
{
cout<<s;
}
else if(m>=s && m>=mi)
{
cout<<m;
}
else if(mi>=m && mi>=s)
{
cout<<mi;
}
}
