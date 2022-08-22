#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,ma,mi;
cin>>x>>y;
ma=x*4;
mi=x*2;
if(y>ma||y<mi||y%2==1)
{
cout<<"No";
}
else
{
cout<<"Yes";
}
return 0;
}
