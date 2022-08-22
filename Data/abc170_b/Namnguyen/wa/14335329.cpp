#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float x,y;
cin>>x>>y;
float a=(4*x-y);
float b=(y-2*x);
if((float)((int)a)!=a || (float)((int)b)!=b) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
