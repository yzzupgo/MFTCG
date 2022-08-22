#include<iostream>
using namespace std;
int main()
{
int n,l,sum=0;
cin>>n>>l;
for(int i=1;i<=n;i++){
sum+=l+i-1;
}
if(l>=0)
cout<<sum-l;
else{
if(-1*l<n)
cout<<sum;
else
cout<<sum-(l+n-1);
}
}
