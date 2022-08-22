#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll A,B,a[3];
scanf("%lld %lld",&A,&B);
a[0]=A-B;
a[1]=A*B;
a[2]=A+B;
sort(a,a+2);
printf("%lld",a[2]);
return 0;
}
