#include <iostream>
using namespace std;
int main()
{
long long s,counter=0;
cin>>s;
for(int i=1;i<=s;i++)
{
if(i<10)
counter++;
else if(i>=100&&i<1000)
counter++;
else if(i>=10000&&i<100000)
counter++;
}
cout<<counter;
return 0;
}
