#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main()
{
int n,l;
cin>>n>>l;
if(1<=1-l&&1-l<=n)
cout<<n*(l-1)+n*(n+1)/2;
else if(l>=0)
cout<<n*(l-1)+n*(n+1)/2-l;
else if(n+l-1<=0)
cout<<n*(l-1)+n*(n+1)/2-n+l-1;
return 0;
}
