#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int sum=0;
while(sum+4<y and x--)
{
sum=+4;
}
while(x>0)
{
sum+=2;
x--;
}
if(sum==y)
{
cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}
}
