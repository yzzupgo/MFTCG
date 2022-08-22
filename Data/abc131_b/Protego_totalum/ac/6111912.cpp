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
int mini_diff=INT_MAX;
for(int i=0;i<n;i++)
{
if(abs(origisum-(origisum-arr[i]))<mini_diff)
{
ans=origisum-arr[i];
mini_diff=abs(origisum-(origisum-arr[i]));
}
}
cout<<ans;
return 0;
}
