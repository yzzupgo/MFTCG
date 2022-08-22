#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
int i,k;
k=0;
for(i=0;i<=X;i++)
{
if(i*2+(X-i)*4==Y)
{
k=1;
break;
}
}
if(k==1)
{
cout << "YES" << endl;
}
if(k==0)
{
cout << "NO" << endl;
}
return 0;
}
