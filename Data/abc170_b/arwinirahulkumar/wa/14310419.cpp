#include <iostream>
using namespace std;
void find1(int X,int Y)
{
int a=0;
a = (int)((4*X)-Y)/2;
if(a<0 || X-a<0)
cout<<"No";
else
cout<<"Yes";
}
int main()
{
int X,Y;
cin>>X>>Y;
find1(X,Y);
return 0;
}
