#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
int x,y;
cin>>x>>y;
if(y%2==0 && y<=4*x && y>=2*x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
