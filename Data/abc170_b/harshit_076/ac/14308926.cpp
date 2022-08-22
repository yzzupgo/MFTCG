#include<bits/stdc++.h>
using namespace std;
int main()
{
int ani,leg;
cin>>ani>>leg;
if(leg%2)
{
cout<<"No\n";
return 0;
}
int y=leg/2;
y-=ani;
int x=ani-y;
if(x>=0 && y>=0)
cout<<"Yes\n";
else
cout<<"No\n";
}
