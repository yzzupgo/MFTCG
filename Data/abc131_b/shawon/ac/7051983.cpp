#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l, sum=0;
scanf("%d%d", &n, &l);
vector<int>vc;
for(int i=1; i<=n; i++)
vc.push_back(l+i-1);
sort(vc.begin(), vc.end());
if(vc[0]>=0)
{
for(int i=1; i<n; i++)
sum+=vc[i];
}
else if(vc[0]<=0 && vc[n-1]>0)
{
for(int i=0; i<n; i++)
sum+=vc[i];
}
else if(vc[n-1]<=0)
{
for(int i=0; i<n-1; i++)
sum+=vc[i];
}
printf("%d\n", sum);
return 0;
}
