#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
double n, l, i, a, ans=0;
scanf("%lf%lf",&n,&l);
a=l;
int la=abs(l);
for(double i=1; i<=n; i++)
{
ans+=a++;
}
if(l>=0)
ans-=l;
else if(l<0 && la>n)
ans-=(l+n-1);
cout << ans << '\n';
}
