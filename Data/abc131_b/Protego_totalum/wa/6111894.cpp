#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l;
cin>>n>>l;
int arr[n];
int origisum=0;
for(int i=0;i<n;i++)
{
arr[i]=l+i;
origisum+=arr[i];
}
int ans=INT_MIN;
for(int i=0;i<n;i++)
{
if(origisum-arr[i]>ans)
{
ans=origisum-arr[i];
}
}
cout<<ans;
return 0;
}
