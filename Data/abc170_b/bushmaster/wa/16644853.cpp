#include<bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin>>X>>Y;
for(int a=0;a<=Y/2;a++)
{
if((Y-2*a)%4==0)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
