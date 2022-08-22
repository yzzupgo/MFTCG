#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l,sum=0;
cin>>n>>l;
int a[n];
for(int i=0;i<n;i++){
a[i]=l;
l++;
sum+=a[i];
}
for(int i=0;i<n;i++){
if(a[i]<0)
a[i]=a[i]*(-1);
}
sort(a,a+n);
if(sum<0)
sum=sum+a[0];
else
sum-=a[0];
cout<<sum<<endl;
return 0;
}
