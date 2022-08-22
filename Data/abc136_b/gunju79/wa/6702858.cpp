#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,s=0;
scanf("%d",&n);
if(n<=9) s=n;
else if(n>9&&n<100) s=9;
else if(n>=100&&n<=999) s=9+(n-100)+1;
else if(n>999&&n<1000) s=9+900;
else if(n>=10000&&n<=99999) s=9+900+(n-10000)+1;
else s=9+900+90000;
printf("%d",s);
}
