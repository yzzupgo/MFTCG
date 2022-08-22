#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
int i,j,k;
k=0;
for(i=1;i<=X;i++)
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
else
{
cout << "NO" << endl;
}
return 0;
}
