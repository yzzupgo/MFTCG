#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int n, cnt=0;
cin >> n;
if(n>9)
cnt+=9;
else
cnt+=n;
if(n>99 &&n<=999)
cnt+=(n-99);
else if(n>999)
cnt+=(999-99);
if(n>9999 && n<=99999)
cnt+=(n-9999);
else if(n>99999)
cnt+=(99999-9999);
cout << cnt;
return 0;
}
