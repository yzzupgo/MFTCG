#include<bits/stdc++.h>
using namespace std;
int f(int x)
{int r=0;
while(x>0)
{r++;
x/=10;
}
return r;
}
int main() {
int n,i,ans=0;
cin>>n;
for(i=1;i<n;i++)
if(f(i)&1)ans++;
cout<<ans;
}
