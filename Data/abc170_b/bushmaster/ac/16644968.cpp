#include<bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin>>X>>Y;
for(int a=0;a<=X;a++)
{
int b=X-a;
if(Y==(2*a)+(4*b))
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
