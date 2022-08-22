#include<iostream>
#include<cstdlib>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
int x,y,i=0,j=0,z;
cin>>x;
cin>>y;
j=y/2-x;
i=2*x-y/2;
if(x==1 && (y==2 || y==4))
{
cout<<"Yes"<<endl;
}
else if(i>=0 && j>=0)
{
cout<<"Yes";
}
else{
cout<<"No";
}
return 0;
}
