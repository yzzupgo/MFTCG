#include<bits/stdc++.h>
using namespace std;
int main()
{
int long x,y;
cin>>x>>y;
int m = x*2;
int n = x*4;
if(y >= m && y <= n && y%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
