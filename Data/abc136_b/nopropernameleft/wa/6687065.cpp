#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,ans=0;
cin>>n;
for(int i=1;i<=n;i++)
if((i>=1 && i<10) || (i>=100 && i<1000) || i==100000)
ans++;
cout<<ans;
return 0;
}
