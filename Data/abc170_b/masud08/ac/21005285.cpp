#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;cin>>x>>y;
if(y%2==0 && y>=x*2 && y<=x*4)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
