#include<bits/stdc++.h>
using namespace std;
int main()
{
long long x,y;
cin>>x>>y;
if(x*4>=y && y>=x*2 && y%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
