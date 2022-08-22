#include<iostream>
using namespace std;
int main()
{
int N,c=0,k=0,x;
cin>>N;
for(int i=1;i<=N;i++)
{
x = i;
while(x)
{
x/=10;
c++;
}
if(c%2==1)
k++;
c=0;
}
cout<<k;
return 0;
}
