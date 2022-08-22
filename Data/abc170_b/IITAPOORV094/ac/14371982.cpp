#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(m%2==0 && (2*n-(m/2))>=0 && (m/2-n)>=0)
{
cout<<"Yes"<<"\n";
}
else
{
cout<<"No"<<"\n";
}
return(0);
}
