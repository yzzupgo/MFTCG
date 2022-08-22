#include <iostream>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
string x="No";
for(int i=0;i<=n;i++)
{
int d=2*n+4*(n-i);
if(d==k) x="Yes";
}
cout<<x;
return 0;
}
