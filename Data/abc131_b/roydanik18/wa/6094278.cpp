#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<functional>
#include<limits.h>
#include<numeric>
using namespace std;
int main()
{
long long int l,n,sum=0;
cin>>n>>l;
long long int *a=new long long int[n];
long long int min=INT_MAX;
for(long long int i=0;i<n;i++)
{
a[i]=std::abs(l+(i+1)-1);
}
for(long long int i=0;i<n;i++)
{
if( (std::abs(a[i])) < min )
min=a[i];
sum+=a[i];
}
cout<<sum-min<<endl;
return 0;
}
