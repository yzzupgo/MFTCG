#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if (x==1 && (y==2 || y==4))
cout<<"Yes"<<endl;
else if(x*2>=y || x*4<=y || y%2==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
return 0;
}
