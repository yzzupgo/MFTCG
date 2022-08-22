#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No\n";
}
else if((x*4)>=y )
{
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
return 0;
}
