#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l,min;
cin>>n>>l;
int sum = (n*(2*l-1+n))/2;
min = l;
for(int i=0;i<n;i++)
{
if(abs(l+i)<abs(min))min=l+i;
}
if(min>=0)
cout<<sum-abs(min)<<endl;
else cout<<sum+abs(min)<<endl;
}
