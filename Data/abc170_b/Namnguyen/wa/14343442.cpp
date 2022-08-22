#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float x,y;
cin>>x>>y;
float a=((4*x-y)/2);
float b=((y-2*x)/2);
if(a!=(int)a || b!=(int)b) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
