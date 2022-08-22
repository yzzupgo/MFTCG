#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(4*x<y || 2*x>y || y%2==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
return 0;
}
