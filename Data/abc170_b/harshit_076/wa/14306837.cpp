#include<bits/stdc++.h>
using namespace std;
int main()
{
int ani,leg;
cin>>ani>>leg;
if(leg%2)
{
cout<<"NO\n";
return 0;
}
int y=leg/2;
y-=ani;
int x=ani-y;
if(x>=0 && y>=0)
cout<<"YES\n";
else
cout<<"NO\n";
}
