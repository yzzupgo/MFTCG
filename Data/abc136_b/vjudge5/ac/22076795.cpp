#include <iostream>
using namespace std;
int main()
{
int n;
int ans=0;
scanf("%d",&n);
int cnt=0;
if(n==100000)
printf("%d\n",9+900+90000);
else if(n>=10000)
printf("%d\n",9+900+n-10000+1);
else if(n>=1000)
printf("%d\n",9+900);
else if(n>=100)
printf("%d\n",9+n-100+1);
else if(n>=10)
printf("%d\n",9);
else
printf("%d\n",n);
}
