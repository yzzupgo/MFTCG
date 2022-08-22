#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;cin>>n>>l;
int p;
long long sum=0;
int mini=INT_MAX;
for(int i=0;i<n;i++){cin>>p;if(abs(p)<mini)mini=p;sum+=p;}
cout<<sum-mini;
return 0;
}
