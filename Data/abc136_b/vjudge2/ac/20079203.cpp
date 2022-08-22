#include <iostream>
using namespace std;
int main()
{
int N , temp=0 , z=0 , sum=0;
cin>>N;
for (int i = 1 ; i <=N ; i++)
{
temp = i;
while(temp!=0)
{
temp=temp/10;
z++;
}
if(z%2!=0)
sum++;
z=0;
} cout<<sum;
return 0;
}
