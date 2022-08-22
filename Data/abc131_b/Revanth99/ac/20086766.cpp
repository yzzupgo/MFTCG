#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
if(l<=0 && l+n-1>=0) cout<<(l+l+n-1)*n/2;
else if(l>0) cout<<(l+l+n-1)*n/2 -l;
else cout<<(l+l+n-1)*n/2 - (l+n-1);
return 0;
}
