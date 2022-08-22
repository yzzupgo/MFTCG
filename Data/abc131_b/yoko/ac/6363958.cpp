#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int s=0,n,l;cin>>n>>l;
for(int i=1;i<=n;i++)s+=l+i-1;
cout<<s-(l+min(n,max(1,1-l))-1)<<endl;
return 0;
}
