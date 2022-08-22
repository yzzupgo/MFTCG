#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,l;cin>>n>>l;
long long sum=0;
int mini=INT_MAX;
for(int i=1;i<=n;i++){
int p=l+i-1;
if(mini> abs(p))mini=min(p,mini);
sum+=(p);
}
cout<<sum-mini;
return 0;
}
