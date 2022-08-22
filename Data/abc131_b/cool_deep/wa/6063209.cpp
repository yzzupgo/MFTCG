#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;cin>>n>>l;
int p;
long long sum=0;
int mini=INT_MAX;
for(int i=0;i<n;i++){mini=min(abs(p),mini);cin>>p;sum+=abs(p);}
cout<<sum-mini;
return 0;
}
