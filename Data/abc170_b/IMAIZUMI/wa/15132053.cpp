#include<iostream>
using namespace std;
int main()
{
int X = 0, Y = 0;
int a=0;
cin >> X >> Y;
for(int i=0;i<X;i++)
{
if(2*i==Y)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
}
