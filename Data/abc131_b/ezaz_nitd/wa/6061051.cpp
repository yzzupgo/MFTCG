#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define MAX 10000003
using namespace std;
int main()
{
int n,l,s=0,p;
cin>>n>>l;
p=l;
for(int i=1;i<=n;i++)
{
s=s+(l+i-1);
}
if(l<0)
cout << s << endl;
else
cout << (s-l) << endl;
return 0;
}
