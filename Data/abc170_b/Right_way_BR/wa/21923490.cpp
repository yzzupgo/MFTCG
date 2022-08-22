#include<bits/stdc++.h>
using namespace std;
int main()
{
int long x,y;
cin>>x>>y;
int div = y/x;
if((div==2 || div == 4) && (y%2==0))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
