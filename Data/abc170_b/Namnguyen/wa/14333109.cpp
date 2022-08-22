#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int a=(4*x-y)/2;
int b=(y-2*x)/2;
if(a<0 || b<0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
