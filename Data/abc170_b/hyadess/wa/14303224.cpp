#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y&2==1 || 2*x>y || 4*x<y)
cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
