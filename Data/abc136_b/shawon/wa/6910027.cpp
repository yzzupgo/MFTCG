#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
scanf("%d", &n);
if(n<10)
printf("%d\n", n);
else if(n>=10 && n<100)
printf("9\n");
else if(n>=100 && n<1000)
printf("%d\n", n-90);
else if(n>=1000 && n<10000)
printf("%d\n", n-909);
else if(n>=10000 && n<100000)
printf("%d\n", n-9090);
else
printf("90909\n");
return 0;
}
