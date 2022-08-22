#include <cstdlib>
#include<iostream>
using namespace std;
int main(void) {
int N,L;
cin>>N>>L;
int i;
int sum=0;
int count=0;
for(i=0;i<N;i++)
{
sum+=i+L;
count++;
}
int j;
if(L>0)
{
cout<<sum-L<<endl;
}
else if(L<0&&(count+L)>0)
{
cout<<sum<<endl;
}
else
{
cout<<sum-(N+L-1)<<endl;
}
return 0;
}
