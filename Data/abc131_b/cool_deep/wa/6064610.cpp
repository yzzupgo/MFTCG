#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;cin>>n>>l;
int p;
long long sum=0;
int mini=INT_MAX;
for(int i=1;i<=n;i++){p=l+i-1;mini=min(abs(p),mini);sum+=(p);}
cout<<sum-mini;
return 0;
}
